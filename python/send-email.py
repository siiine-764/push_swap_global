import smtplib
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
from email.mime.application import MIMEApplication

# Define email addresses to use
to_address = "outlook_43C1244BDCEC7FF4@outlook.com"
from_address = "42events@1337.ma"

# Define the message object
msg = MIMEMultipart()
msg['From'] = from_address
msg['To'] = to_address
msg['Subject'] = "1337"

# Add body text to the email
# body = 'This is a test email.'
# msg.attach(MIMEText(body, 'plain'))

# read the contents of the HTML file
with open('./file.html', 'r') as f:
    html = f.read()

# create the HTML message object
html_message = MIMEText(html, 'html')

# attach the HTML message object to the main message object
msg.attach(html_message)

# Open the file to be attached
#filename = "attachment.txt"
#with open(filename, "rb") as attachment:
#    # Define the attachment object
#    att = MIMEApplication(
#        attachment.read(),
#        Name=filename
#    )
#    # Add header information to the attachment
#    att['Content-Disposition'] = f'attachment; filename="{filename}"'
#    # Add the attachment to the message object
#    msg.attach(att)

# Define SMTP server settings
smtp_server = "smtp-relay.sendinblue.com"
smtp_port = 587
smtp_username = "ayacheyassine2000@gmail.com"
smtp_password = "MQdTjwNLnF47s9xK"

# Create an SMTP object and login to the server
smtp = smtplib.SMTP(smtp_server, smtp_port)
smtp.starttls()
smtp.login(smtp_username, smtp_password)

# Send the email and close the connection
smtp.sendmail(from_address, to_address, msg.as_string())
smtp.quit()