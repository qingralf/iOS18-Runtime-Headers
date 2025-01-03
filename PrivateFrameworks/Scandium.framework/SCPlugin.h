/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Scandium.framework/Scandium
 */

@interface SCPlugin : NSObject {
    struct IOCFPlugInInterfaceStruct { 
        void *_reserved; 
        int (*QueryInterface)(); 
        int (*AddRef)(); 
        int (*Release)(); 
        unsigned short version; 
        unsigned short revision; 
        int (*Probe)(); 
        int (*Start)(); 
        int (*Stop)(); 
    }  _cfPlugIn;
    struct IOCFPlugInInterfaceStruct { void *x1; int (*x2)(); int (*x3)(); int (*x4)(); unsigned short x5; unsigned short x6; int (*x7)(); int (*x8)(); int (*x9)(); } * _cfPlugInPtr;
    unsigned int  _cfPlugInRefCount;
    SCPlugin * _circularReferenceToSelf;
    struct IOHIDServiceInterface2 { 
        void *_reserved; 
        int (*QueryInterface)(); 
        int (*AddRef)(); 
        int (*Release)(); 
        int (*open)(); 
        int (*close)(); 
        int (*copyProperty)(); 
        int (*setProperty)(); 
        int (*setEventCallback)(); 
        int (*scheduleWithDispatchQueue)(); 
        int (*unscheduleFromDispatchQueue)(); 
        int (*copyEvent)(); 
        int (*setOutputEvent)(); 
    }  _hidService;
    struct IOHIDServiceInterface2 { void *x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); } * _hidServicePtr;
    unsigned int  _hidServiceRefCount;
    unsigned int  _iUnknownRefCount;
    NSMutableDictionary * _properties;
    SCService * _service;
}

+ (void*)createCOMObject;

- (void).cxx_destruct;
- (void)checkRefCounts;
- (void)dealloc;
- (id)init;

@end
