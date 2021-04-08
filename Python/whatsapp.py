from selenium import webdriver
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.by import By
from selenium.webdriver.common.desired_capabilities import DesiredCapabilities
import time

driver = webdriver.Chrome(executable_path='./chromedriver')
driver.get('https:/web.whatsapp.com/')
ChatName = input('Enter Contact/Group Name ')
NoCount = int(input('Enter Count '))

input("Check inputs, scan whatsapp and then press any key")
user = driver.find_element_by_xpath('//span[@title="{}"]'.format(ChatName))

user.click()

msg_box = driver.find_element_by_class_name('_2A8P4')
for i in range(NoCount):
    ChatMsg = 'Test Spam '+str(i)
    msg_box.send_keys(ChatMsg)
    time.sleep(0.001)
    send_button = driver.find_element_by_class_name('_1E0Oz')
    send_button.click()
    time.sleep(0.001)
