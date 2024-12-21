/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailUI.framework/MailUI
 */

@interface MUISearchIndexStatus : NSObject {
    bool  _isPaused;
    unsigned long long  _messagesInLargestRemoteAccount;
    unsigned long long  _messagesIndexed;
    unsigned long long  _totalMessages;
}

@property (nonatomic) bool isPaused;
@property (nonatomic, readonly) bool isVisible;
@property (nonatomic, readonly) unsigned long long messagesInLargestRemoteAccount;
@property (nonatomic) unsigned long long messagesIndexed;
@property (nonatomic, readonly) float progress;
@property (nonatomic) unsigned long long totalMessages;

- (id)init;
- (id)initWithMessagesIndexed:(unsigned long long)arg1 totalMessages:(unsigned long long)arg2 messagesInLargestRemoteAccount:(unsigned long long)arg3 paused:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isPaused;
- (bool)isVisible;
- (unsigned long long)messagesInLargestRemoteAccount;
- (unsigned long long)messagesIndexed;
- (float)progress;
- (void)setIsPaused:(bool)arg1;
- (void)setMessagesIndexed:(unsigned long long)arg1;
- (void)setTotalMessages:(unsigned long long)arg1;
- (unsigned long long)totalMessages;

@end