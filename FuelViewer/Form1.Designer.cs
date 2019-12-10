namespace FuelViewer
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.titleLabel = new System.Windows.Forms.Label();
            this.descriptionLabel = new System.Windows.Forms.Label();
            this.currentUsageLabel = new System.Windows.Forms.Label();
            this.minuteFuelLabel = new System.Windows.Forms.Label();
            this.lapFuelLabel = new System.Windows.Forms.Label();
            this.avgFuelLabel = new System.Windows.Forms.Label();
            this.currentUsageBox = new System.Windows.Forms.TextBox();
            this.avgFuelBox = new System.Windows.Forms.TextBox();
            this.lastMinFuelBox = new System.Windows.Forms.TextBox();
            this.lastLapFuelBox = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // titleLabel
            // 
            this.titleLabel.AutoSize = true;
            this.titleLabel.Font = new System.Drawing.Font("Bauhaus 93", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.titleLabel.Location = new System.Drawing.Point(15, 15);
            this.titleLabel.Name = "titleLabel";
            this.titleLabel.Size = new System.Drawing.Size(175, 18);
            this.titleLabel.TabIndex = 0;
            this.titleLabel.Text = "Racing Fuel Calculator";
            // 
            // descriptionLabel
            // 
            this.descriptionLabel.AutoSize = true;
            this.descriptionLabel.Location = new System.Drawing.Point(15, 45);
            this.descriptionLabel.Name = "descriptionLabel";
            this.descriptionLabel.Size = new System.Drawing.Size(105, 13);
            this.descriptionLabel.TabIndex = 1;
            this.descriptionLabel.Text = "By: Mitchell Freshour";
            // 
            // currentUsageLabel
            // 
            this.currentUsageLabel.AutoSize = true;
            this.currentUsageLabel.Location = new System.Drawing.Point(197, 15);
            this.currentUsageLabel.Name = "currentUsageLabel";
            this.currentUsageLabel.Size = new System.Drawing.Size(38, 13);
            this.currentUsageLabel.TabIndex = 2;
            this.currentUsageLabel.Text = "Usage";
            // 
            // minuteFuelLabel
            // 
            this.minuteFuelLabel.AutoSize = true;
            this.minuteFuelLabel.Location = new System.Drawing.Point(397, 15);
            this.minuteFuelLabel.Name = "minuteFuelLabel";
            this.minuteFuelLabel.Size = new System.Drawing.Size(85, 13);
            this.minuteFuelLabel.TabIndex = 3;
            this.minuteFuelLabel.Text = "Fuel Last Minute";
            // 
            // lapFuelLabel
            // 
            this.lapFuelLabel.AutoSize = true;
            this.lapFuelLabel.Location = new System.Drawing.Point(497, 15);
            this.lapFuelLabel.Name = "lapFuelLabel";
            this.lapFuelLabel.Size = new System.Drawing.Size(71, 13);
            this.lapFuelLabel.TabIndex = 4;
            this.lapFuelLabel.Text = "Fuel Last Lap";
            // 
            // avgFuelLabel
            // 
            this.avgFuelLabel.AutoSize = true;
            this.avgFuelLabel.Location = new System.Drawing.Point(297, 15);
            this.avgFuelLabel.Name = "avgFuelLabel";
            this.avgFuelLabel.Size = new System.Drawing.Size(70, 13);
            this.avgFuelLabel.TabIndex = 5;
            this.avgFuelLabel.Text = "Average Fuel";
            // 
            // currentUsageBox
            // 
            this.currentUsageBox.BackColor = System.Drawing.SystemColors.Control;
            this.currentUsageBox.Font = new System.Drawing.Font("Lucida Console", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.currentUsageBox.Location = new System.Drawing.Point(200, 35);
            this.currentUsageBox.Name = "currentUsageBox";
            this.currentUsageBox.ReadOnly = true;
            this.currentUsageBox.Size = new System.Drawing.Size(50, 23);
            this.currentUsageBox.TabIndex = 6;
            // 
            // avgFuelBox
            // 
            this.avgFuelBox.BackColor = System.Drawing.SystemColors.Control;
            this.avgFuelBox.Font = new System.Drawing.Font("Lucida Console", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.avgFuelBox.Location = new System.Drawing.Point(300, 35);
            this.avgFuelBox.Name = "avgFuelBox";
            this.avgFuelBox.ReadOnly = true;
            this.avgFuelBox.Size = new System.Drawing.Size(50, 23);
            this.avgFuelBox.TabIndex = 7;
            // 
            // lastMinFuelBox
            // 
            this.lastMinFuelBox.BackColor = System.Drawing.SystemColors.Control;
            this.lastMinFuelBox.Font = new System.Drawing.Font("Lucida Console", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lastMinFuelBox.Location = new System.Drawing.Point(400, 35);
            this.lastMinFuelBox.Name = "lastMinFuelBox";
            this.lastMinFuelBox.ReadOnly = true;
            this.lastMinFuelBox.Size = new System.Drawing.Size(50, 23);
            this.lastMinFuelBox.TabIndex = 8;
            // 
            // lastLapFuelBox
            // 
            this.lastLapFuelBox.BackColor = System.Drawing.SystemColors.Control;
            this.lastLapFuelBox.Font = new System.Drawing.Font("Lucida Console", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lastLapFuelBox.Location = new System.Drawing.Point(500, 35);
            this.lastLapFuelBox.Name = "lastLapFuelBox";
            this.lastLapFuelBox.ReadOnly = true;
            this.lastLapFuelBox.Size = new System.Drawing.Size(50, 23);
            this.lastLapFuelBox.TabIndex = 9;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(580, 77);
            this.Controls.Add(this.lastLapFuelBox);
            this.Controls.Add(this.lastMinFuelBox);
            this.Controls.Add(this.avgFuelBox);
            this.Controls.Add(this.currentUsageBox);
            this.Controls.Add(this.avgFuelLabel);
            this.Controls.Add(this.lapFuelLabel);
            this.Controls.Add(this.minuteFuelLabel);
            this.Controls.Add(this.currentUsageLabel);
            this.Controls.Add(this.descriptionLabel);
            this.Controls.Add(this.titleLabel);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label titleLabel;
        private System.Windows.Forms.Label descriptionLabel;
        private System.Windows.Forms.Label currentUsageLabel;
        private System.Windows.Forms.Label minuteFuelLabel;
        private System.Windows.Forms.Label lapFuelLabel;
        private System.Windows.Forms.Label avgFuelLabel;
        private System.Windows.Forms.TextBox currentUsageBox;
        private System.Windows.Forms.TextBox avgFuelBox;
        private System.Windows.Forms.TextBox lastMinFuelBox;
        private System.Windows.Forms.TextBox lastLapFuelBox;
    }
}

