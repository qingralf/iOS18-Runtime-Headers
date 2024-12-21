/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMailMessage : MFMessage <EDBaseMessage, NSItemProviderWriting> {
    NSURL * _globalMessageURL;
    unsigned long long  _messageFlags;
    unsigned long long  _modSequenceNumber;
    bool  _shouldUseMailDrop;
    bool  _sourceIsManaged;
    bool  _useInternalSourceIsManaged;
}

@property (nonatomic, readonly) MailAccount *account;
@property (nonatomic, readonly, copy) NSArray *bcc;
@property (readonly, copy) NSArray *bccIfAvailable; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSArray *cc;
@property unsigned long long conversationFlags;
@property (nonatomic, readonly) long long conversationID;
@property (nonatomic, readonly) NSDate *dateReceived;
@property (nonatomic, readonly) NSDate *dateSent;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool deleted;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSUUID *documentID;
@property (nonatomic, readonly) unsigned long long fileSize;
@property (nonatomic, readonly) ECMessageFlags *flags;
@property (nonatomic, readonly, copy) NSArray *from;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MFMessageHeaders *headers;
@property (nonatomic, readonly, copy) NSDictionary *headersDictionary;
@property (nonatomic, readonly) MFMessageHeaders *headersIfAvailable;
@property (nonatomic) bool isServerSearchResult;
@property (readonly) NSSet *labels;
@property (nonatomic, readonly) ECAngleBracketIDHash *listIDHash;
@property (nonatomic, readonly, copy) NSArray *listUnsubscribe;
@property (nonatomic, readonly) MFMailboxUid *mailbox;
@property (nonatomic) unsigned long long messageFlags;
@property (nonatomic, readonly, copy) NSString *messageIDHeader;
@property (nonatomic, readonly) ECAngleBracketIDHash *messageIDHeaderHash;
@property (nonatomic, retain) MFMessageStore<MFMailMessageStore> *messageStore;
@property (nonatomic, readonly) <ECMimeBody> *mimeBody;
@property unsigned long long modSequenceNumber;
@property (nonatomic, readonly) unsigned long long numberOfAttachments;
@property (getter=isPartOfExistingThread, nonatomic, readonly) bool partOfExistingThread;
@property (nonatomic, readonly, copy) NSString *persistentID;
@property (nonatomic, readonly) bool read;
@property (nonatomic, readonly, copy) NSArray *references;
@property (nonatomic, readonly, copy) NSString *remoteID;
@property (nonatomic, readonly, copy) NSArray *senders;
@property (nonatomic) bool shouldUseMailDrop;
@property (nonatomic) bool sourceIsManaged;
@property (nonatomic, readonly, copy) ECSubject *subject;
@property (nonatomic, readonly, copy) ECSubject *subjectIfAvailable;
@property (nonatomic, retain) NSString *summary;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *to;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider; /* unknown property attribute: ? */

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

+ (Class)dataMessageStoreToUse;
+ (unsigned int)displayablePriorityForPriority:(int)arg1;
+ (id)forwardedMessagePrefixWithSpacer:(bool)arg1;
+ (id)globalMessageURLWithMessageIDHeader:(id)arg1;
+ (unsigned int)validatePriority:(int)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)_bestAlternativePartContent:(bool*)arg1;
- (id)account;
- (bool)answered;
- (id)bestAlternativePart;
- (id)bestAlternativePart:(bool*)arg1;
- (id)bestAlternativePartAsData:(bool*)arg1 usingEncoding:(unsigned long long)arg2;
- (unsigned long long)conversationFlags;
- (long long)conversationHash;
- (bool)conversationMuted;
- (bool)conversationVIP;
- (bool)deleted;
- (id)externalConversationID;
- (bool)flagged;
- (id)flags;
- (id)followUp;
- (id)from;
- (id)globalMessageURL;
- (id)headersDictionary;
- (bool)isPartOfExistingThread;
- (bool)isSearchResultWithBogusRemoteId;
- (bool)isServerSearchResult;
- (bool)junk;
- (id)labels;
- (long long)libraryID;
- (id)listUnsubscribe;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (id)loadMeetingData;
- (id)loadMeetingExternalID;
- (id)loadMeetingMetadata;
- (id)mailMessageStore;
- (id)mailbox;
- (void)markAsFlagged;
- (void)markAsForwarded;
- (void)markAsNotFlagged;
- (void)markAsNotViewed;
- (void)markAsReplied;
- (void)markAsViewed;
- (unsigned long long)messageFlags;
- (id)messageStore;
- (id)mimeBody;
- (unsigned long long)modSequenceNumber;
- (unsigned long long)numberOfAttachments;
- (id)originalMailboxURL;
- (id)preferredAccountToUseForReplying;
- (id)preferredEmailAddressToReplyWith;
- (long long)priority;
- (bool)read;
- (id)readLater;
- (id)references;
- (id)remoteMailboxURL;
- (id)sendLaterDate;
- (void)setConversationFlags:(unsigned long long)arg1;
- (void)setIsServerSearchResult:(bool)arg1;
- (void)setMessageFlags:(unsigned long long)arg1;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1;
- (void)setModSequenceNumber:(unsigned long long)arg1;
- (void)setMutableInfoFromMessage:(id)arg1;
- (void)setPriorityFromHeaders:(id)arg1;
- (void)setShouldUseMailDrop:(bool)arg1;
- (void)setSourceIsManaged:(bool)arg1;
- (void)setSubject:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceived:(double)arg6 dateSent:(double)arg7 summary:(id)arg8 withOptions:(unsigned int)arg9;
- (void)setSummary:(id)arg1;
- (bool)shouldSetSummary;
- (bool)shouldUseMailDrop;
- (bool)sourceIsManaged;
- (id)storageLocationForAttachment:(id)arg1;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (bool)dragItemsAreAllMessages:(id)arg1;
+ (id)writableTypeIdentifiersForItemProvider;

- (id)_attributedSubject;
- (id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (void)_loadMessageDataWithCompletion:(id /* block */)arg1;
- (long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;

@end