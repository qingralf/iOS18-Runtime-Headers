/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailUI.framework/MailUI
 */

@interface MessageItemViewModel : NSObject <MessageItemViewModelBuilder> {
    bool  _VIP;
    bool  _blockedSender;
    NSDate * _date;
    NSDate * _displayDate;
    NSIndexSet * _flagColors;
    bool  _flagged;
    EMFollowUp * _followUp;
    bool  _forwarded;
    bool  _hasAttachments;
    bool  _junk;
    bool  _mute;
    bool  _notify;
    bool  _read;
    NSDate * _readLaterDate;
    bool  _redirected;
    bool  _replied;
    NSDate * _sendLaterDate;
    bool  _unscreenedSender;
    long long  _unsubscribeType;
}

@property (getter=isVIP, nonatomic) bool VIP;
@property (getter=isBlockedSender, nonatomic) bool blockedSender;
@property (nonatomic, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *displayDate;
@property (nonatomic, copy) NSIndexSet *flagColors;
@property (getter=isFlagged, nonatomic) bool flagged;
@property (nonatomic, copy) EMFollowUp *followUp;
@property (getter=isForwarded, nonatomic) bool forwarded;
@property (nonatomic) bool hasAttachments;
@property (readonly) unsigned long long hash;
@property (getter=isJunk, nonatomic) bool junk;
@property (getter=isMute, nonatomic) bool mute;
@property (getter=isNotify, nonatomic) bool notify;
@property (getter=isRead, nonatomic) bool read;
@property (nonatomic, copy) NSDate *readLaterDate;
@property (getter=isRedirected, nonatomic) bool redirected;
@property (getter=isReplied, nonatomic) bool replied;
@property (nonatomic, copy) NSDate *sendLaterDate;
@property (readonly) Class superclass;
@property (getter=isUnscreenedSender, nonatomic) bool unscreenedSender;
@property (nonatomic) long long unsubscribeType;

- (void).cxx_destruct;
- (id)date;
- (id)displayDate;
- (id)flagColors;
- (id)followUp;
- (bool)hasAttachments;
- (id)initWithItemBuilder:(id /* block */)arg1;
- (bool)isBlockedSender;
- (bool)isFlagged;
- (bool)isForwarded;
- (bool)isJunk;
- (bool)isMute;
- (bool)isNotify;
- (bool)isRead;
- (bool)isRedirected;
- (bool)isReplied;
- (bool)isUnscreenedSender;
- (bool)isVIP;
- (id)readLaterDate;
- (id)sendLaterDate;
- (void)setBlockedSender:(bool)arg1;
- (void)setDate:(id)arg1;
- (void)setDisplayDate:(id)arg1;
- (void)setFlagColors:(id)arg1;
- (void)setFlagged:(bool)arg1;
- (void)setFollowUp:(id)arg1;
- (void)setForwarded:(bool)arg1;
- (void)setHasAttachments:(bool)arg1;
- (void)setJunk:(bool)arg1;
- (void)setMute:(bool)arg1;
- (void)setNotify:(bool)arg1;
- (void)setRead:(bool)arg1;
- (void)setReadLaterDate:(id)arg1;
- (void)setRedirected:(bool)arg1;
- (void)setReplied:(bool)arg1;
- (void)setSendLaterDate:(id)arg1;
- (void)setUnscreenedSender:(bool)arg1;
- (void)setUnsubscribeType:(long long)arg1;
- (void)setVIP:(bool)arg1;
- (long long)unsubscribeType;

@end