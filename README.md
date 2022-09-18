# Secure_AI
An Artificial Intelligence based software to timestamp humans and objects in security videos
Introduction:
In today’s insecure environment, security cameras are a must to monitor any physical infrastructure, be it industrial or domestic premises. The security apparatus available in the market, merely records the video in most of the cases. The recordings are limited by the amount of storage available and hence the recording medium is recycled for future recordings. In this case the earlier recordings get erased. In most of the cases, the equipment does not recognise any events or objects intelligently and hence if anybody, for example, the police want to know what happened in a certain time frame, they have to rewind and replay the video and manually see each and every frame which is tedious and time consuming.
This project is an intelligent agent which detects people and objects in a video stream and creates a report of when any event has occurred. With the help of the report the manual rewinding can be limited to what the report suggests and hence is less time consuming and less tedious.
Description:
The technology stack which is being planned to use is C++, OpenCV and associated artificial algorithms. The first attempt will be to feed the software with a recorded video stream and the detector is turned on to detect humans. This section of the software will detect the humans with a human detection algorithm and will record the timestamp of the detection. Moreover, the position of human/s in the frame also will be recorded with a bounding box.
Features:
1.	Can run an entire video and capture the frame number in which humans are detected. These frame numbers can be logged into a file or can be printed on the console.
2.	Once the frame numbers are logged, the logfile can be used to search the frame in the video and display the content. 
3.	The above step can be done to investigate a single frame as well using special commands.
4.	Distance from the camera to the detected objected can be estimated and logged along with the frame number so as to know which frame number is of more interest with the help of the meta data, in this case, the distance from the camera to the subject/object.
To Compile:
g++ video_webcam.cpp -o test_video  -std=c++11 `pkg-config  - - cflags - - libs opencv’
