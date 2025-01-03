/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAudioAccessoryManagerInternal : NSObject {
    bool  fAudioAccessoryAccelerometerAvailable;
    struct Dispatcher { int (**x1)(); id x2; } * fAudioAccessoryAccelerometerDispatcher;
    id /* block */  fAudioAccessoryAccelerometerHandler;
    NSOperationQueue * fAudioAccessoryAccelerometerQueue;
    double  fAudioAccessoryAccelerometerUpdateInterval;
    bool  fAudioAccessoryActivityAvailable;
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> { 
        struct __compressed_pair<CLMotionNotifier::Dispatcher *, std::default_delete<CLMotionNotifier::Dispatcher>> { 
            struct Dispatcher {} *__value_; 
        } __ptr_; 
    }  fAudioAccessoryActivityDispatcher;
    id /* block */  fAudioAccessoryActivityHandler;
    NSOperationQueue * fAudioAccessoryActivityQueue;
    double  fAudioAccessoryActivityUpdateInterval;
    bool  fAudioAccessoryDeviceMotionAvailable;
    struct Dispatcher { int (**x1)(); id x2; } * fAudioAccessoryDeviceMotionConfigDispatcher;
    struct Dispatcher { int (**x1)(); id x2; } * fAudioAccessoryDeviceMotionDispatcher;
    id /* block */  fAudioAccessoryDeviceMotionHandler;
    NSOperationQueue * fAudioAccessoryDeviceMotionQueue;
    struct Dispatcher { int (**x1)(); id x2; } * fAudioAccessoryDeviceMotionStatusDispatcher;
    id /* block */  fAudioAccessoryDeviceMotionStatusHandler;
    NSOperationQueue * fAudioAccessoryDeviceMotionStatusQueue;
    double  fAudioAccessoryDeviceMotionUpdateInterval;
    bool  fAudioAccessoryGyroAvailable;
    struct Dispatcher { int (**x1)(); id x2; } * fAudioAccessoryGyroDispatcher;
    id /* block */  fAudioAccessoryGyroHandler;
    NSOperationQueue * fAudioAccessoryGyroQueue;
    double  fAudioAccessoryGyroUpdateInterval;
    bool  fAudioAccessoryHeartRateAvailable;
    struct Dispatcher { int (**x1)(); id x2; } * fAudioAccessoryHeartRateDispatcher;
    id /* block */  fAudioAccessoryHeartRateHandler;
    NSOperationQueue * fAudioAccessoryHeartRateQueue;
    double  fAudioAccessoryHeartRateUpdateInterval;
    bool  fAudioAccessoryMagnetometerAvailable;
    struct Dispatcher { int (**x1)(); id x2; } * fAudioAccessoryMagnetometerDispatcher;
    id /* block */  fAudioAccessoryMagnetometerHandler;
    NSOperationQueue * fAudioAccessoryMagnetometerQueue;
    double  fAudioAccessoryMagnetometerUpdateInterval;
    bool  fAudioAccessoryPPGAvailable;
    struct Dispatcher { int (**x1)(); id x2; } * fAudioAccessoryPPGDispatcher;
    id /* block */  fAudioAccessoryPPGHandler;
    NSOperationQueue * fAudioAccessoryPPGQueue;
    struct CMOQuaternion { 
        float elements[4]; 
    }  fFrameRotation;
    struct Sample { 
        double timestamp; 
        struct { 
            float x; 
            float y; 
            float z; 
        } acceleration; 
        unsigned long long sensorTime; 
        unsigned short sequenceNumber; 
    }  fLatestAudioAccessoryAccelerometerSample;
    struct Sample { 
        double timestamp; 
        struct { 
            float x; 
            float y; 
            float z; 
        } gyro; 
        unsigned long long sensorTime; 
        unsigned short sequenceNumber; 
        float temperature; 
    }  fLatestAudioAccessoryGyroSample;
    struct Sample { 
        double timestamp; 
        unsigned int heartRate; 
        float confidence; 
        unsigned long long sensorTime; 
        unsigned int sequenceNumber; 
    }  fLatestAudioAccessoryHeartRateSample;
    struct Sample { 
        double timestamp; 
        struct { 
            float x; 
            float y; 
            float z; 
        } magneticField; 
        unsigned long long sensorTime; 
        unsigned short sequenceNumber; 
        float temperature; 
    }  fLatestAudioAccessoryMagnetometerSample;
    struct Sample { 
        double timestamp; 
        unsigned long long sensorTime; 
        unsigned char frameNum; 
        unsigned char error; 
        unsigned char dark0[3]; 
        unsigned char light0[3]; 
        unsigned char dark1[3]; 
        unsigned char dark2[3]; 
        unsigned char light1[3]; 
        unsigned char dark3[3]; 
        unsigned char rxGain[2]; 
        unsigned char ledCurrent[2]; 
    }  fLatestAudioAccessoryPPGSample;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  fSampleLock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end
