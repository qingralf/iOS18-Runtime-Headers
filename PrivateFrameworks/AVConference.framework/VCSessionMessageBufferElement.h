/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCSessionMessageBufferElement : NSObject {
    <VCControlChannelMessageProtocol> * _message;
    long long  _retryNumber;
    long long  _sequenceNumber;
}

@property (nonatomic, readonly) <VCControlChannelMessageProtocol> *message;
@property (nonatomic, readonly) long long retryNumber;
@property (nonatomic, readonly) long long sequenceNumber;

- (void)dealloc;
- (id)initWithMessage:(id)arg1 sequenceNumber:(unsigned long long)arg2 retryNumber:(unsigned long long)arg3;
- (id)message;
- (long long)retryNumber;
- (long long)sequenceNumber;

@end
