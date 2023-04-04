import smtplib
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
from email.mime.application import MIMEApplication

# Define email addresses to use
to_address = "ayacheyassine2000@gmail.com"
from_address = "42events@1337.ma"

# Define the message object
msg = MIMEMultipart()
msg['From'] = from_address
msg['To'] = to_address
msg['Subject'] = "1337"

# Add body text to the email
body = "you've been absorbed by blackhole nod 3la slmatek"
msg.attach(MIMEText(body, 'plain'))

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
smtp_username = ""
smtp_password = ""

# Create an SMTP object and login to the server
smtp = smtplib.SMTP(smtp_server, smtp_port)
smtp.starttls()
smtp.login(smtp_username, smtp_password)

# Send the email and close the connection
smtp.sendmail(from_address, to_address, msg.as_string())
smtp.quit()