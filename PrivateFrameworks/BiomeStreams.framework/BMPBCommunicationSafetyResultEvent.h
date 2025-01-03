/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
 */

@interface BMPBCommunicationSafetyResultEvent : PBCodable <NSCopying> {
    double  _absoluteTimestamp;
    NSString * _childId;
    int  _communicationSafetyResultContentType;
    int  _communicationSafetyResultEventDirection;
    int  _communicationSafetyResultEventType;
    NSMutableArray * _contactHandles;
    NSString * _contentId;
    NSString * _contentURL;
    NSString * _conversationId;
    NSString * _conversationURL;
    NSString * _deviceId;
    struct { 
        unsigned int absoluteTimestamp : 1; 
        unsigned int communicationSafetyResultContentType : 1; 
        unsigned int communicationSafetyResultEventDirection : 1; 
        unsigned int communicationSafetyResultEventType : 1; 
    }  _has;
    NSData * _imageData;
    NSString * _senderHandle;
    bool  _skipImage;
    NSString * _sourceBundleId;
}

@property (nonatomic) double absoluteTimestamp;
@property (nonatomic, retain) NSString *childId;
@property (nonatomic) int communicationSafetyResultContentType;
@property (nonatomic) int communicationSafetyResultEventDirection;
@property (nonatomic) int communicationSafetyResultEventType;
@property (nonatomic, retain) NSMutableArray *contactHandles;
@property (nonatomic, retain) NSString *contentId;
@property (nonatomic, retain) NSString *contentURL;
@property (nonatomic, retain) NSString *conversationId;
@property (nonatomic, retain) NSString *conversationURL;
@property (nonatomic, retain) NSString *deviceId;
@property (nonatomic) bool hasAbsoluteTimestamp;
@property (nonatomic, readonly) bool hasChildId;
@property (nonatomic) bool hasCommunicationSafetyResultContentType;
@property (nonatomic) bool hasCommunicationSafetyResultEventDirection;
@property (nonatomic) bool hasCommunicationSafetyResultEventType;
@property (nonatomic, readonly) bool hasContentId;
@property (nonatomic, readonly) bool hasContentURL;
@property (nonatomic, readonly) bool hasConversationId;
@property (nonatomic, readonly) bool hasConversationURL;
@property (nonatomic, readonly) bool hasDeviceId;
@property (nonatomic, readonly) bool hasImageData;
@property (nonatomic, readonly) bool hasSenderHandle;
@property (nonatomic, readonly) bool hasSourceBundleId;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic, retain) NSString *senderHandle;
@property (nonatomic, retain) NSString *sourceBundleId;

+ (Class)contactHandlesType;

- (void).cxx_destruct;
- (int)StringAsCommunicationSafetyResultContentType:(id)arg1;
- (int)StringAsCommunicationSafetyResultEventDirection:(id)arg1;
- (int)StringAsCommunicationSafetyResultEventType:(id)arg1;
- (double)absoluteTimestamp;
- (void)addContactHandles:(id)arg1;
- (id)childId;
- (void)clearContactHandles;
- (int)communicationSafetyResultContentType;
- (id)communicationSafetyResultContentTypeAsString:(int)arg1;
- (int)communicationSafetyResultEventDirection;
- (id)communicationSafetyResultEventDirectionAsString:(int)arg1;
- (int)communicationSafetyResultEventType;
- (id)communicationSafetyResultEventTypeAsString:(int)arg1;
- (id)contactHandles;
- (id)contactHandlesAtIndex:(unsigned long long)arg1;
- (unsigned long long)contactHandlesCount;
- (id)contentId;
- (id)contentURL;
- (id)conversationId;
- (id)conversationURL;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceId;
- (id)dictionaryRepresentation;
- (bool)hasAbsoluteTimestamp;
- (bool)hasChildId;
- (bool)hasCommunicationSafetyResultContentType;
- (bool)hasCommunicationSafetyResultEventDirection;
- (bool)hasCommunicationSafetyResultEventType;
- (bool)hasContentId;
- (bool)hasContentURL;
- (bool)hasConversationId;
- (bool)hasConversationURL;
- (bool)hasDeviceId;
- (bool)hasImageData;
- (bool)hasSenderHandle;
- (bool)hasSourceBundleId;
- (unsigned long long)hash;
- (id)imageData;
- (id)initWithData:(id)arg1 skipImage:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)senderHandle;
- (void)setAbsoluteTimestamp:(double)arg1;
- (void)setChildId:(id)arg1;
- (void)setCommunicationSafetyResultContentType:(int)arg1;
- (void)setCommunicationSafetyResultEventDirection:(int)arg1;
- (void)setCommunicationSafetyResultEventType:(int)arg1;
- (void)setContactHandles:(id)arg1;
- (void)setContentId:(id)arg1;
- (void)setContentURL:(id)arg1;
- (void)setConversationId:(id)arg1;
- (void)setConversationURL:(id)arg1;
- (void)setDeviceId:(id)arg1;
- (void)setHasAbsoluteTimestamp:(bool)arg1;
- (void)setHasCommunicationSafetyResultContentType:(bool)arg1;
- (void)setHasCommunicationSafetyResultEventDirection:(bool)arg1;
- (void)setHasCommunicationSafetyResultEventType:(bool)arg1;
- (void)setImageData:(id)arg1;
- (void)setSenderHandle:(id)arg1;
- (void)setSourceBundleId:(id)arg1;
- (id)sourceBundleId;
- (void)writeTo:(id)arg1;

@end
