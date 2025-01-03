/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDChatMemberStatusChangeContext : NSObject {
    IMDAccount * _account;
    NSString * _chatIdentifier;
    NSString * _countryCode;
    NSString * _destinationCallerID;
    NSString * _fromHandleID;
    NSString * _handleID;
    NSString * _messageID;
    NSDate * _messageTime;
    bool  _silently;
    int  _status;
    unsigned char  _style;
    bool  _unattributed;
    NSString * _unformattedNumber;
}

@property (nonatomic, retain) IMDAccount *account;
@property (nonatomic, retain) NSString *chatIdentifier;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, retain) NSString *destinationCallerID;
@property (nonatomic, retain) NSString *fromHandleID;
@property (nonatomic, retain) NSString *handleID;
@property (nonatomic, retain) NSString *messageID;
@property (nonatomic, retain) NSDate *messageTime;
@property (nonatomic) bool silently;
@property (nonatomic) int status;
@property (nonatomic) unsigned char style;
@property (nonatomic) bool unattributed;
@property (nonatomic, retain) NSString *unformattedNumber;

- (void).cxx_destruct;
- (id)account;
- (id)chatIdentifier;
- (id)countryCode;
- (id)destinationCallerID;
- (id)fromHandleID;
- (id)handleID;
- (id)messageID;
- (id)messageTime;
- (void)setAccount:(id)arg1;
- (void)setChatIdentifier:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDestinationCallerID:(id)arg1;
- (void)setFromHandleID:(id)arg1;
- (void)setHandleID:(id)arg1;
- (void)setMessageID:(id)arg1;
- (void)setMessageTime:(id)arg1;
- (void)setSilently:(bool)arg1;
- (void)setStatus:(int)arg1;
- (void)setStyle:(unsigned char)arg1;
- (void)setUnattributed:(bool)arg1;
- (void)setUnformattedNumber:(id)arg1;
- (bool)silently;
- (int)status;
- (unsigned char)style;
- (bool)unattributed;
- (id)unformattedNumber;

@end
