/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface _EDCombinedMessageInfo : NSObject {
    NSMutableArray * _dates;
    NSMutableArray * _flags;
    long long  _lowestDatabaseID;
    NSMutableSet * _mailboxes;
    EMMessage * _message;
}

@property (nonatomic, retain) NSMutableArray *dates;
@property (nonatomic, readonly) EMMessage *deduplicatedMessage;
@property (nonatomic, retain) NSMutableArray *flags;
@property (nonatomic) long long lowestDatabaseID;
@property (nonatomic, retain) NSMutableSet *mailboxes;
@property (nonatomic, retain) EMMessage *message;

- (void).cxx_destruct;
- (void)addMessage:(id)arg1 withDatabaseID:(long long)arg2;
- (id)combinedDate;
- (id)combinedMailboxes;
- (id)combinedMessageFlags;
- (id)dates;
- (id)deduplicatedMessage;
- (id)flags;
- (id)init;
- (long long)lowestDatabaseID;
- (id)mailboxes;
- (id)message;
- (void)setDates:(id)arg1;
- (void)setFlags:(id)arg1;
- (void)setLowestDatabaseID:(long long)arg1;
- (void)setMailboxes:(id)arg1;
- (void)setMessage:(id)arg1;

@end
