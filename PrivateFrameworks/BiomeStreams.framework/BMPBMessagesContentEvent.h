/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
 */

@interface BMPBMessagesContentEvent : PBCodable <NSCopying> {
    double  _absoluteTimestamp;
    NSMutableArray * _accountHandles;
    NSString * _accountIdentifier;
    NSString * _accountType;
    BMPBContentAttachment * _attachment;
    NSString * _attachmentURL;
    NSString * _author;
    NSString * _content;
    NSString * _contentProtection;
    NSString * _conversationId;
    NSString * _conversationUUID;
    NSString * _domainId;
    BMPBNamedHandle * _fromHandle;
    struct { 
        unsigned int absoluteTimestamp : 1; 
        unsigned int tapbackType : 1; 
        unsigned int messageEffect : 1; 
        unsigned int isBusinessChat : 1; 
        unsigned int isFromMe : 1; 
        unsigned int isGroupThread : 1; 
        unsigned int isJunk : 1; 
        unsigned int isKnownSender : 1; 
        unsigned int isNew : 1; 
        unsigned int isPinned : 1; 
        unsigned int isRead : 1; 
        unsigned int isTwoFactorCode : 1; 
    }  _has;
    bool  _isBusinessChat;
    bool  _isFromMe;
    bool  _isGroupThread;
    bool  _isJunk;
    bool  _isKnownSender;
    bool  _isNew;
    bool  _isPinned;
    bool  _isRead;
    bool  _isTwoFactorCode;
    int  _messageEffect;
    NSString * _messageType;
    NSString * _messagesService;
    NSString * _personaId;
    NSString * _recipients;
    NSString * _suggestedNickname;
    NSString * _suggestedPhotoPath;
    NSString * _tapbackAssociatedMessageID;
    long long  _tapbackType;
    NSMutableArray * _toHandles;
    NSString * _uniqueId;
    NSString * _url;
}

@property (nonatomic) double absoluteTimestamp;
@property (nonatomic, retain) NSMutableArray *accountHandles;
@property (nonatomic, retain) NSString *accountIdentifier;
@property (nonatomic, retain) NSString *accountType;
@property (nonatomic, retain) BMPBContentAttachment *attachment;
@property (nonatomic, retain) NSString *attachmentURL;
@property (nonatomic, retain) NSString *author;
@property (nonatomic, retain) NSString *content;
@property (nonatomic, retain) NSString *contentProtection;
@property (nonatomic, retain) NSString *conversationId;
@property (nonatomic, retain) NSString *conversationUUID;
@property (nonatomic, retain) NSString *domainId;
@property (nonatomic, retain) BMPBNamedHandle *fromHandle;
@property (nonatomic) bool hasAbsoluteTimestamp;
@property (nonatomic, readonly) bool hasAccountIdentifier;
@property (nonatomic, readonly) bool hasAccountType;
@property (nonatomic, readonly) bool hasAttachment;
@property (nonatomic, readonly) bool hasAttachmentURL;
@property (nonatomic, readonly) bool hasAuthor;
@property (nonatomic, readonly) bool hasContent;
@property (nonatomic, readonly) bool hasContentProtection;
@property (nonatomic, readonly) bool hasConversationId;
@property (nonatomic, readonly) bool hasConversationUUID;
@property (nonatomic, readonly) bool hasDomainId;
@property (nonatomic, readonly) bool hasFromHandle;
@property (nonatomic) bool hasIsBusinessChat;
@property (nonatomic) bool hasIsFromMe;
@property (nonatomic) bool hasIsGroupThread;
@property (nonatomic) bool hasIsJunk;
@property (nonatomic) bool hasIsKnownSender;
@property (nonatomic) bool hasIsNew;
@property (nonatomic) bool hasIsPinned;
@property (nonatomic) bool hasIsRead;
@property (nonatomic) bool hasIsTwoFactorCode;
@property (nonatomic) bool hasMessageEffect;
@property (nonatomic, readonly) bool hasMessageType;
@property (nonatomic, readonly) bool hasMessagesService;
@property (nonatomic, readonly) bool hasPersonaId;
@property (nonatomic, readonly) bool hasRecipients;
@property (nonatomic, readonly) bool hasSuggestedNickname;
@property (nonatomic, readonly) bool hasSuggestedPhotoPath;
@property (nonatomic, readonly) bool hasTapbackAssociatedMessageID;
@property (nonatomic) bool hasTapbackType;
@property (nonatomic, readonly) bool hasUniqueId;
@property (nonatomic, readonly) bool hasUrl;
@property (nonatomic) bool isBusinessChat;
@property (nonatomic) bool isFromMe;
@property (nonatomic) bool isGroupThread;
@property (nonatomic) bool isJunk;
@property (nonatomic) bool isKnownSender;
@property (nonatomic) bool isNew;
@property (nonatomic) bool isPinned;
@property (nonatomic) bool isRead;
@property (nonatomic) bool isTwoFactorCode;
@property (nonatomic) int messageEffect;
@property (nonatomic, retain) NSString *messageType;
@property (nonatomic, retain) NSString *messagesService;
@property (nonatomic, retain) NSString *personaId;
@property (nonatomic, retain) NSString *recipients;
@property (nonatomic, retain) NSString *suggestedNickname;
@property (nonatomic, retain) NSString *suggestedPhotoPath;
@property (nonatomic, retain) NSString *tapbackAssociatedMessageID;
@property (nonatomic) long long tapbackType;
@property (nonatomic, retain) NSMutableArray *toHandles;
@property (nonatomic, retain) NSString *uniqueId;
@property (nonatomic, retain) NSString *url;

+ (Class)accountHandlesType;
+ (Class)toHandlesType;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (id)accountHandles;
- (id)accountHandlesAtIndex:(unsigned long long)arg1;
- (unsigned long long)accountHandlesCount;
- (id)accountIdentifier;
- (id)accountType;
- (void)addAccountHandles:(id)arg1;
- (void)addToHandles:(id)arg1;
- (id)attachment;
- (id)attachmentURL;
- (id)author;
- (void)clearAccountHandles;
- (void)clearToHandles;
- (id)content;
- (id)contentProtection;
- (id)conversationId;
- (id)conversationUUID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domainId;
- (id)fromHandle;
- (bool)hasAbsoluteTimestamp;
- (bool)hasAccountIdentifier;
- (bool)hasAccountType;
- (bool)hasAttachment;
- (bool)hasAttachmentURL;
- (bool)hasAuthor;
- (bool)hasContent;
- (bool)hasContentProtection;
- (bool)hasConversationId;
- (bool)hasConversationUUID;
- (bool)hasDomainId;
- (bool)hasFromHandle;
- (bool)hasIsBusinessChat;
- (bool)hasIsFromMe;
- (bool)hasIsGroupThread;
- (bool)hasIsJunk;
- (bool)hasIsKnownSender;
- (bool)hasIsNew;
- (bool)hasIsPinned;
- (bool)hasIsRead;
- (bool)hasIsTwoFactorCode;
- (bool)hasMessageEffect;
- (bool)hasMessageType;
- (bool)hasMessagesService;
- (bool)hasPersonaId;
- (bool)hasRecipients;
- (bool)hasSuggestedNickname;
- (bool)hasSuggestedPhotoPath;
- (bool)hasTapbackAssociatedMessageID;
- (bool)hasTapbackType;
- (bool)hasUniqueId;
- (bool)hasUrl;
- (unsigned long long)hash;
- (bool)isBusinessChat;
- (bool)isEqual:(id)arg1;
- (bool)isFromMe;
- (bool)isGroupThread;
- (bool)isJunk;
- (bool)isKnownSender;
- (bool)isNew;
- (bool)isPinned;
- (bool)isRead;
- (bool)isTwoFactorCode;
- (void)mergeFrom:(id)arg1;
- (int)messageEffect;
- (id)messageType;
- (id)messagesService;
- (id)personaId;
- (bool)readFrom:(id)arg1;
- (id)recipients;
- (void)setAbsoluteTimestamp:(double)arg1;
- (void)setAccountHandles:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountType:(id)arg1;
- (void)setAttachment:(id)arg1;
- (void)setAttachmentURL:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setContentProtection:(id)arg1;
- (void)setConversationId:(id)arg1;
- (void)setConversationUUID:(id)arg1;
- (void)setDomainId:(id)arg1;
- (void)setFromHandle:(id)arg1;
- (void)setHasAbsoluteTimestamp:(bool)arg1;
- (void)setHasIsBusinessChat:(bool)arg1;
- (void)setHasIsFromMe:(bool)arg1;
- (void)setHasIsGroupThread:(bool)arg1;
- (void)setHasIsJunk:(bool)arg1;
- (void)setHasIsKnownSender:(bool)arg1;
- (void)setHasIsNew:(bool)arg1;
- (void)setHasIsPinned:(bool)arg1;
- (void)setHasIsRead:(bool)arg1;
- (void)setHasIsTwoFactorCode:(bool)arg1;
- (void)setHasMessageEffect:(bool)arg1;
- (void)setHasTapbackType:(bool)arg1;
- (void)setIsBusinessChat:(bool)arg1;
- (void)setIsFromMe:(bool)arg1;
- (void)setIsGroupThread:(bool)arg1;
- (void)setIsJunk:(bool)arg1;
- (void)setIsKnownSender:(bool)arg1;
- (void)setIsNew:(bool)arg1;
- (void)setIsPinned:(bool)arg1;
- (void)setIsRead:(bool)arg1;
- (void)setIsTwoFactorCode:(bool)arg1;
- (void)setMessageEffect:(int)arg1;
- (void)setMessageType:(id)arg1;
- (void)setMessagesService:(id)arg1;
- (void)setPersonaId:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSuggestedNickname:(id)arg1;
- (void)setSuggestedPhotoPath:(id)arg1;
- (void)setTapbackAssociatedMessageID:(id)arg1;
- (void)setTapbackType:(long long)arg1;
- (void)setToHandles:(id)arg1;
- (void)setUniqueId:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)suggestedNickname;
- (id)suggestedPhotoPath;
- (id)tapbackAssociatedMessageID;
- (long long)tapbackType;
- (id)toHandles;
- (id)toHandlesAtIndex:(unsigned long long)arg1;
- (unsigned long long)toHandlesCount;
- (id)uniqueId;
- (id)url;
- (void)writeTo:(id)arg1;

@end
