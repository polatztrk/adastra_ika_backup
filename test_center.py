#!/usr/bin/python3.6
import rospy
from geometry_msgs.msg import Point
from std_msgs.msg import Float64

pub1 = rospy.Publisher('Servo_Angles',Float64,queue_size=2)
def pub_servo(angle):
    pub1.publish(angle)
    print("Publishing center value: {}".format(angle))
   
    #r = rospy.Rate(1)
    #while not rospy.is_shutdown():
        
        
        #r.sleep()

def callback(data):
    rospy.loginfo(rospy.get_caller_id() + "I heard x={},y={}".format(data.x,data.y))
    pub_servo(data.x)


def listener():
    rospy.init_node('listener',anonymous=True)

    listener = rospy.Subscriber('coordinates',Point,callback)
    
    rospy.spin()

if __name__ == '__main__':
    listener()
