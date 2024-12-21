/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDIndexedAttachment : NSObject {
    void attachmentID;
    void messageID;
}

@property (nonatomic, readonly) EDPersistedAttachmentID *attachmentID;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) EDPersistedMessageID *messageID;

- (void).cxx_destruct;
- (id)attachmentID;
- (long long)hash;
- (id)init;
- (id)initWithMessageID:(id)arg1 attachmentID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)messageID;

@end