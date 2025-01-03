/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DSContinuityPairing.framework/DSContinuityPairing
 */

@interface DSContinuityDevice : NSObject {
    NSUUID * _deviceID;
    UIImage * _deviceImage;
    NSString * _formattedSessionDuration;
    NSString * _formattedSessionStart;
    NSDate * _initialDiscoveryDate;
    NSString * _marketingName;
    NSString * _model;
    NSString * _name;
    NSString * _pushToken;
    NSUUID * _relationshipID;
    NSString * _serialNumber;
}

@property (nonatomic, retain) NSUUID *deviceID;
@property (nonatomic, retain) UIImage *deviceImage;
@property (nonatomic, retain) NSString *formattedSessionDuration;
@property (nonatomic, retain) NSString *formattedSessionStart;
@property (nonatomic, retain) NSDate *initialDiscoveryDate;
@property (nonatomic, retain) NSString *marketingName;
@property (nonatomic, retain) NSString *model;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *pushToken;
@property (nonatomic, retain) NSUUID *relationshipID;
@property (nonatomic, retain) NSString *serialNumber;

- (void).cxx_destruct;
- (id)deviceID;
- (id)deviceImage;
- (id)formattedSessionDuration;
- (id)formattedSessionStart;
- (id)initWithName:(id)arg1 deviceID:(id)arg2 relationshipID:(id)arg3 initialDiscoveryDate:(id)arg4;
- (id)initialDiscoveryDate;
- (bool)isEqual:(id)arg1;
- (id)marketingName;
- (id)model;
- (id)name;
- (id)pushToken;
- (id)relationshipID;
- (id)serialNumber;
- (void)setDeviceID:(id)arg1;
- (void)setDeviceImage:(id)arg1;
- (void)setFormattedSessionDuration:(id)arg1;
- (void)setFormattedSessionStart:(id)arg1;
- (void)setInitialDiscoveryDate:(id)arg1;
- (void)setMarketingName:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)setRelationshipID:(id)arg1;
- (void)setSerialNumber:(id)arg1;

@end
