/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDMessagePersistenceStatistics : NSObject {
    double  _duration;
    unsigned long long  _messageData;
    unsigned long long  _messageDataDeleted;
    unsigned long long  _messages;
    unsigned long long  _messagesDeleted;
    double  _start;
}

@property (nonatomic) double duration;
@property (nonatomic) unsigned long long messageData;
@property (nonatomic) unsigned long long messageDataDeleted;
@property (nonatomic) unsigned long long messages;
@property (nonatomic) unsigned long long messagesDeleted;
@property (nonatomic) double start;

- (double)duration;
- (unsigned long long)messageData;
- (unsigned long long)messageDataDeleted;
- (unsigned long long)messages;
- (unsigned long long)messagesDeleted;
- (void)setDuration:(double)arg1;
- (void)setMessageData:(unsigned long long)arg1;
- (void)setMessageDataDeleted:(unsigned long long)arg1;
- (void)setMessages:(unsigned long long)arg1;
- (void)setMessagesDeleted:(unsigned long long)arg1;
- (void)setStart:(double)arg1;
- (double)start;

@end