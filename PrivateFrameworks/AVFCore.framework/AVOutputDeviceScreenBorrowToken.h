/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVOutputDeviceScreenBorrowToken : NSObject {
    NSString * _client;
    struct OpaqueFigEndpoint { } * _endpoint;
    NSString * _reason;
}

@property (nonatomic, readonly) NSString *client;
@property (nonatomic, readonly) NSString *reason;

- (id)client;
- (void)dealloc;
- (id)init;
- (id)initWithEndpoint:(struct OpaqueFigEndpoint { }*)arg1 client:(id)arg2 reason:(id)arg3;
- (id)reason;

@end
