/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRGroupTopologyModificationRequest : NSObject <NSCopying, NSSecureCoding> {
    bool  _fadeAudio;
    bool  _muteUntilFinished;
    NSArray * _outputDeviceUIDs;
    NSArray * _outputDevices;
    NSString * _password;
    MRRequestDetails * _requestDetails;
    bool  _shouldClearPredictedRoutes;
    bool  _shouldModifyPredictedRoutes;
    bool  _shouldNotPauseIfLastDeviceRemoved;
    bool  _suppressErrorDialog;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic) bool fadeAudio;
@property (nonatomic) bool muteUntilFinished;
@property (nonatomic, readonly) NSArray *outputDeviceUIDs;
@property (nonatomic, readonly) NSArray *outputDevices;
@property (nonatomic) NSString *password;
@property (nonatomic, readonly) _MRGroupTopologyModificationRequestProtobuf *protobuf;
@property (nonatomic, readonly) MRRequestDetails *requestDetails;
@property (nonatomic) bool shouldClearPredictedRoutes;
@property (nonatomic) bool shouldModifyPredictedRoutes;
@property (nonatomic) bool shouldNotPauseIfLastDeviceRemoved;
@property (nonatomic) bool suppressErrorDialog;
@property (nonatomic, readonly) unsigned long long type;

+ (bool)_initiatorShouldClearPredictedRoutesByDefault:(id)arg1 forModificationType:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithOutputDeviceUIDs:(id)arg1;
- (id)copyWithType:(unsigned long long)arg1 outputDeviceUIDs:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)fadeAudio;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithRequestDetails:(id)arg1 type:(unsigned long long)arg2 outputDeviceUIDs:(id)arg3;
- (id)initWithRequestDetails:(id)arg1 type:(unsigned long long)arg2 outputDevices:(id)arg3;
- (bool)muteUntilFinished;
- (id)outputDeviceUIDs;
- (id)outputDevices;
- (id)password;
- (id)protobuf;
- (id)requestDetails;
- (void)setFadeAudio:(bool)arg1;
- (void)setMuteUntilFinished:(bool)arg1;
- (void)setPassword:(id)arg1;
- (void)setShouldClearPredictedRoutes:(bool)arg1;
- (void)setShouldModifyPredictedRoutes:(bool)arg1;
- (void)setShouldNotPauseIfLastDeviceRemoved:(bool)arg1;
- (void)setSuppressErrorDialog:(bool)arg1;
- (bool)shouldClearPredictedRoutes;
- (bool)shouldModifyPredictedRoutes;
- (bool)shouldNotPauseIfLastDeviceRemoved;
- (bool)suppressErrorDialog;
- (unsigned long long)type;

@end
