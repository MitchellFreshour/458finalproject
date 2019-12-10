using System;
using System.IO.Pipes;
using System.Security.Principal;
using System.Text;
using System.Threading;

using System.IO;

using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace WindowsFormsApp1
{
    class ClientPipe
    {
        NamedPipeClientStream pipe;
        private Stream ioStream;
        private UnicodeEncoding encoder;

        public ClientPipe()
        {
            pipe = new NamedPipeClientStream(".", "Calculations", PipeDirection.In);
        }

        public void Connect()
        {
            pipe.Connect();
        }

        public String ReadString()
        {
            int length;
            length = ioStream.ReadByte() * 256;
            length += ioStream.ReadByte();
            var inBuffer = new byte[length];
            ioStream.Read(inBuffer, 0, length);

            return encoder.GetString(inBuffer);
        }

        public int WriteString(string outString)
        {
            byte[] outbuffer = encoder.GetBytes(outString);
            int length = outbuffer.Length;
            if( length > UInt16.MaxValue)
            {
                length = (int)UInt16.MaxValue;
            }
            ioStream.WriteByte((byte)(length / 256));
            ioStream.WriteByte((byte)(length & 255));
            ioStream.Write(outbuffer, 0, length);
            ioStream.Flush();

            return outbuffer.Length + 2;
        }
    }
}
