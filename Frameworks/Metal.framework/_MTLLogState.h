/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLLogState : NSObject <MTLLogState> {
    NSMutableArray * _handlers;
    <MTLBuffer> * _logBuffer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _logBufferLock;
    <MTLResidencySet> * _logBufferResidencySet;
    long long  _logBufferSize;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _logHandlerLock;
    long long  _logLevel;
    NSMutableDictionary * defaultLoggerCache;
    unsigned int  droppedMessages;
    NSString * metalLoggingKey;
    NSString * metalSubsystem;
    NSString * shaderLoggingCategory;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)convertToLogLevel:(const char *)arg1;

- (void)addLogHandler:(id /* block */)arg1;
- (bool)checkAndGetMessage:(struct MessageHeader { unsigned int x1; unsigned int x2; unsigned int x3; bool x4; bool x5; }*)arg1 logBuffer:(struct LogBuffer { struct LogBufferHeader {} *x1; char *x2; }*)arg2 message:(void*)arg3;
- (void)dealloc;
- (void)decodeLog;
- (void)defaultLogHandler:(id)arg1 category:(id)arg2 level:(long long)arg3 message:(id)arg4;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2 error:(id*)arg3;
- (void)invokeLogHandlers:(id)arg1 category:(id)arg2 level:(long long)arg3 message:(id)arg4;
- (void)populateDefaultLoggerCache:(id)arg1 subsystem:(id)arg2 category:(id)arg3;

@end
