/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FSKit.framework/FSKit
 */

@interface FSTask : NSObject <FSTaskMessageOperations, NSSecureCoding> {
    FSMessageConnection * _connection;
    NSUUID * _taskID;
}

@property (readonly) FSMessageConnection *connection;
@property (readonly) NSUUID *taskID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)classForCoder;
- (void)completed:(id)arg1 replyHandler:(id /* block */)arg2;
- (id)connection;
- (void)didCompleteWithError:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageConnection:(id)arg1 taskID:(id)arg2;
- (void)logMessage:(id)arg1;
- (void)prompt:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)promptTrueFalse:(id)arg1 replyHandler:(id /* block */)arg2;
- (id)taskID;

@end
