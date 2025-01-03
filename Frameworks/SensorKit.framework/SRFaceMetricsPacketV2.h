/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SensorKit.framework/SensorKit
 */

@interface SRFaceMetricsPacketV2 : NSObject <SRFaceMetricsPacket> {
    unsigned long long  _context;
    NSUUID * _faceIdentifier;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; double x5; unsigned long long x6; double x7; float x8[501]; struct { float x_9_1_1[3][3]; float x_9_1_2[3]; } x9; float x10[3]; struct { float x_11_1_1; float x_11_1_2; float x_11_1_3; float x_11_1_4; float x_11_1_5; float x_11_1_6; float x_11_1_7; float x_11_1_8; float x_11_1_9; float x_11_1_10; float x_11_1_11; float x_11_1_12; float x_11_1_13; float x_11_1_14; float x_11_1_15; float x_11_1_16; float x_11_1_17; float x_11_1_18; float x_11_1_19; float x_11_1_20; float x_11_1_21; float x_11_1_22; float x_11_1_23; float x_11_1_24; float x_11_1_25; float x_11_1_26; float x_11_1_27; float x_11_1_28; float x_11_1_29; float x_11_1_30; float x_11_1_31; float x_11_1_32; float x_11_1_33; float x_11_1_34; float x_11_1_35; float x_11_1_36; float x_11_1_37; float x_11_1_38; float x_11_1_39; float x_11_1_40; float x_11_1_41; float x_11_1_42; float x_11_1_43; float x_11_1_44; float x_11_1_45; float x_11_1_46; float x_11_1_47; float x_11_1_48; float x_11_1_49; float x_11_1_50; float x_11_1_51; } x11; } * _packet;
    NSString * _sessionIdentifier;
}

@property (nonatomic, readonly, retain) NSData *blendshapes;
@property (nonatomic, readonly) unsigned long long context;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSUUID *faceIdentifier;
@property (nonatomic, readonly, retain) NSArray *gaze;
@property (nonatomic, readonly, retain) NSArray *geometryLeftEye;
@property (nonatomic, readonly, retain) NSArray *geometryRightEye;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) float leftEyePitch;
@property (nonatomic, readonly) float leftEyeYaw;
@property (nonatomic, readonly, retain) NSArray *partialFaceExpressions;
@property (nonatomic, readonly) float rightEyePitch;
@property (nonatomic, readonly) float rightEyeYaw;
@property (nonatomic, readonly, retain) NSArray *rotation;
@property (nonatomic, readonly, copy) NSString *sessionIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) NSDictionary *trackingData;
@property (nonatomic, readonly, retain) NSArray *translation;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly, retain) NSArray *wholeFaceExpressions;

+ (id)packetWithHAFacialMetricsPacket:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; double x5; unsigned long long x6; double x7; float x8[501]; struct { float x_9_1_1[3][3]; float x_9_1_2[3]; } x9; float x10[3]; struct { float x_11_1_1; float x_11_1_2; float x_11_1_3; float x_11_1_4; float x_11_1_5; float x_11_1_6; float x_11_1_7; float x_11_1_8; float x_11_1_9; float x_11_1_10; float x_11_1_11; float x_11_1_12; float x_11_1_13; float x_11_1_14; float x_11_1_15; float x_11_1_16; float x_11_1_17; float x_11_1_18; float x_11_1_19; float x_11_1_20; float x_11_1_21; float x_11_1_22; float x_11_1_23; float x_11_1_24; float x_11_1_25; float x_11_1_26; float x_11_1_27; float x_11_1_28; float x_11_1_29; float x_11_1_30; float x_11_1_31; float x_11_1_32; float x_11_1_33; float x_11_1_34; float x_11_1_35; float x_11_1_36; float x_11_1_37; float x_11_1_38; float x_11_1_39; float x_11_1_40; float x_11_1_41; float x_11_1_42; float x_11_1_43; float x_11_1_44; float x_11_1_45; float x_11_1_46; float x_11_1_47; float x_11_1_48; float x_11_1_49; float x_11_1_50; float x_11_1_51; } x11; }*)arg1;

- (id)blendshapes;
- (unsigned long long)context;
- (void)dealloc;
- (id)faceIdentifier;
- (id)gaze;
- (id)geometryLeftEye;
- (id)geometryRightEye;
- (float)leftEyePitch;
- (float)leftEyeYaw;
- (id)partialFaceExpressions;
- (float)rightEyePitch;
- (float)rightEyeYaw;
- (id)rotation;
- (id)sessionIdentifier;
- (id)trackingData;
- (id)translation;
- (id)version;
- (id)wholeFaceExpressions;

@end
