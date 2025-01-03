/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUIBridge.framework/SiriUIBridge
 */

@interface SUIBOrchestrationTask : NSObject <NSSecureCoding> {
    NSUUID * _taskId;
}

@property (nonatomic, readonly, copy) NSUUID *taskId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)taskId;

@end
