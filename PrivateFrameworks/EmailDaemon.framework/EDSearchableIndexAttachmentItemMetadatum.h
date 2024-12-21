/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDSearchableIndexAttachmentItemMetadatum : NSObject {
    NSString * _accountIdentifier;
    NSURL * _attachmentFileURL;
    UTType * _contentType;
    NSDate * _dateReceived;
    NSDate * _dateSent;
    NSString * _domainIdentifier;
    NSArray * _mailboxIdentifiers;
    NSString * _messageIDHeader;
    NSString * _name;
    NSArray * _recipientAddresses;
    NSString * _senderAddress;
}

@property (nonatomic, readonly, copy) NSString *accountIdentifier;
@property (nonatomic, readonly) NSURL *attachmentFileURL;
@property (nonatomic, readonly) bool canReadAttachmentFile;
@property (nonatomic, retain) UTType *contentType;
@property (nonatomic, readonly) NSDate *dateReceived;
@property (nonatomic, readonly) NSDate *dateSent;
@property (nonatomic, readonly, copy) NSString *domainIdentifier;
@property (nonatomic, readonly, copy) NSArray *mailboxIdentifiers;
@property (nonatomic, readonly, copy) NSString *messageIDHeader;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSArray *recipientAddresses;
@property (nonatomic, readonly, copy) NSString *senderAddress;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)attachmentFileURL;
- (bool)canReadAttachmentFile;
- (id)contentType;
- (id)dateReceived;
- (id)dateSent;
- (id)domainIdentifier;
- (id)initWithAttachmentFileURL:(id)arg1 name:(id)arg2 domainIdentifier:(id)arg3 accountIdentifier:(id)arg4 mailboxIdentifiers:(id)arg5 messageIDHeader:(id)arg6 senderAddress:(id)arg7 recipientAddresses:(id)arg8 dateReceived:(id)arg9 dateSent:(id)arg10;
- (id)mailboxIdentifiers;
- (id)messageIDHeader;
- (id)name;
- (id)recipientAddresses;
- (id)senderAddress;
- (void)setContentType:(id)arg1;

@end