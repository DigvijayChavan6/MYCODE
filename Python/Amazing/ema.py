import smtplib
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
def send_email(sender_email, sender_password, receiver_email, subject, message):
    # Set up the SMTP server
    smtp_server = "smtp.gmail.com"
    smtp_port = 587

    # Create a secure connection to the SMTP server
    server = smtplib.SMTP(smtp_server, smtp_port)
    server.starttls()

    # Log in to the sender's email account
    server.login(sender_email, sender_password)

    # Create a MIMEMultipart message
    email_message = MIMEMultipart()
    email_message["From"] = sender_email
    email_message["To"] = receiver_email
    email_message["Subject"] = subject

    # Add the message body as plain text
    email_message.attach(MIMEText(message, "plain"))

    # Send the email
    server.send_message(email_message)

    # Clean up the connection
    server.quit()

# Usage example
sender_email = "chavandigvijay9081@gmail.com"
sender_password = "gDSeva2580!o"
receiver_email = "@gmail.com"
subject = "Hello from Python!"
message = "This is a test email sent using Python."

send_email(sender_email, sender_password, receiver_email, subject, message)