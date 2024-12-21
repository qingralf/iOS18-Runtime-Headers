/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRGroupTopologyModificationRequestProtobuf : PBCodable <NSCopying> {
    _MRRequestDetailsProtobuf * _details;
    bool  _fadeAudio;
    struct { 
        unsigned int type : 1; 
        unsigned int fadeAudio : 1; 
        unsigned int muteUntilFinished : 1; 
        unsigned int shouldClearPredictedRoutes : 1; 
        unsigned int shouldModifyPredictedRoutes : 1; 
        unsigned int shouldNotPauseIfLastDeviceRemoved : 1; 
        unsigned int suppressErrorDialog : 1; 
    }  _has;
    bool  _muteUntilFinished;
    NSMutableArray * _outputDeviceUIDs;
    NSString * _password;
    bool  _shouldClearPredictedRoutes;
    bool  _shouldModifyPredictedRoutes;
    bool  _shouldNotPauseIfLastDeviceRemoved;
    bool  _suppressErrorDialog;
    int  _type;
}

@property (nonatomic, retain) _MRRequestDetailsProtobuf *details;
@property (nonatomic) bool fadeAudio;
@property (nonatomic, readonly) bool hasDetails;
@property (nonatomic) bool hasFadeAudio;
@property (nonatomic) bool hasMuteUntilFinished;
@property (nonatomic, readonly) bool hasPassword;
@property (nonatomic) bool hasShouldClearPredictedRoutes;
@property (nonatomic) bool hasShouldModifyPredictedRoutes;
@property (nonatomic) bool hasShouldNotPauseIfLastDeviceRemoved;
@property (nonatomic) bool hasSuppressErrorDialog;
@property (nonatomic) bool hasType;
@property (nonatomic) bool muteUntilFinished;
@property (nonatomic, retain) NSMutableArray *outputDeviceUIDs;
@property (nonatomic, retain) NSString *password;
@property (nonatomic) bool shouldClearPredictedRoutes;
@property (nonatomic) bool shouldModifyPredictedRoutes;
@property (nonatomic) bool shouldNotPauseIfLastDeviceRemoved;
@property (nonatomic) bool suppressErrorDialog;
@property (nonatomic) int type;

+ (Class)outputDeviceUIDsType;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)addOutputDeviceUIDs:(id)arg1;
- (void)clearOutputDeviceUIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)details;
- (id)dictionaryRepresentation;
- (bool)fadeAudio;
- (bool)hasDetails;
- (bool)hasFadeAudio;
- (bool)hasMuteUntilFinished;
- (bool)hasPassword;
- (bool)hasShouldClearPredictedRoutes;
- (bool)hasShouldModifyPredictedRoutes;
- (bool)hasShouldNotPauseIfLastDeviceRemoved;
- (bool)hasSuppressErrorDialog;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)muteUntilFinished;
- (id)outputDeviceUIDs;
- (id)outputDeviceUIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)outputDeviceUIDsCount;
- (id)password;
- (bool)readFrom:(id)arg1;
- (void)setDetails:(id)arg1;
- (void)setFadeAudio:(bool)arg1;
- (void)setHasFadeAudio:(bool)arg1;
- (void)setHasMuteUntilFinished:(bool)arg1;
- (void)setHasShouldClearPredictedRoutes:(bool)arg1;
- (void)setHasShouldModifyPredictedRoutes:(bool)arg1;
- (void)setHasShouldNotPauseIfLastDeviceRemoved:(bool)arg1;
- (void)setHasSuppressErrorDialog:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setMuteUntilFinished:(bool)arg1;
- (void)setOutputDeviceUIDs:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setShouldClearPredictedRoutes:(bool)arg1;
- (void)setShouldModifyPredictedRoutes:(bool)arg1;
- (void)setShouldNotPauseIfLastDeviceRemoved:(bool)arg1;
- (void)setSuppressErrorDialog:(bool)arg1;
- (void)setType:(int)arg1;
- (bool)shouldClearPredictedRoutes;
- (bool)shouldModifyPredictedRoutes;
- (bool)shouldNotPauseIfLastDeviceRemoved;
- (bool)suppressErrorDialog;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end