/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SensorKit.framework/SensorKit
 */

@interface SRFaceMetricsPacketV1 : NSObject <SRFaceMetricsPacket> {
    NSUUID * _faceIdentifier;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; float x4[501]; struct { float x_5_1_1[3][3]; float x_5_1_2[3]; } x5; float x6[3]; struct { float x_7_1_1; float x_7_1_2; float x_7_1_3; float x_7_1_4; float x_7_1_5; float x_7_1_6; float x_7_1_7; float x_7_1_8; float x_7_1_9; float x_7_1_10; float x_7_1_11; float x_7_1_12; float x_7_1_13; float x_7_1_14; float x_7_1_15; float x_7_1_16; float x_7_1_17; float x_7_1_18; float x_7_1_19; float x_7_1_20; float x_7_1_21; float x_7_1_22; float x_7_1_23; float x_7_1_24; float x_7_1_25; float x_7_1_26; float x_7_1_27; float x_7_1_28; float x_7_1_29; float x_7_1_30; float x_7_1_31; float x_7_1_32; float x_7_1_33; float x_7_1_34; float x_7_1_35; float x_7_1_36; float x_7_1_37; float x_7_1_38; float x_7_1_39; float x_7_1_40; float x_7_1_41; float x_7_1_42; float x_7_1_43; float x_7_1_44; float x_7_1_45; float x_7_1_46; float x_7_1_47; float x_7_1_48; float x_7_1_49; float x_7_1_50; float x_7_1_51; } x7; struct { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; float x_1_2_5; float x_1_2_6; float x_1_2_7; float x_1_2_8; float x_1_2_9; float x_1_2_10; } x_8_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; float x_2_2_5; float x_2_2_6; float x_2_2_7; float x_2_2_8; } x_8_1_2; } x8; } * _packet;
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

+ (id)packetWithHAFacialMetricsPacket:(struct { unsigned int x1; unsigned int x2; unsigned int x3; float x4[501]; struct { float x_5_1_1[3][3]; float x_5_1_2[3]; } x5; float x6[3]; struct { float x_7_1_1; float x_7_1_2; float x_7_1_3; float x_7_1_4; float x_7_1_5; float x_7_1_6; float x_7_1_7; float x_7_1_8; float x_7_1_9; float x_7_1_10; float x_7_1_11; float x_7_1_12; float x_7_1_13; float x_7_1_14; float x_7_1_15; float x_7_1_16; float x_7_1_17; float x_7_1_18; float x_7_1_19; float x_7_1_20; float x_7_1_21; float x_7_1_22; float x_7_1_23; float x_7_1_24; float x_7_1_25; float x_7_1_26; float x_7_1_27; float x_7_1_28; float x_7_1_29; float x_7_1_30; float x_7_1_31; float x_7_1_32; float x_7_1_33; float x_7_1_34; float x_7_1_35; float x_7_1_36; float x_7_1_37; float x_7_1_38; float x_7_1_39; float x_7_1_40; float x_7_1_41; float x_7_1_42; float x_7_1_43; float x_7_1_44; float x_7_1_45; float x_7_1_46; float x_7_1_47; float x_7_1_48; float x_7_1_49; float x_7_1_50; float x_7_1_51; } x7; struct { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; float x_1_2_5; float x_1_2_6; float x_1_2_7; float x_1_2_8; float x_1_2_9; float x_1_2_10; } x_8_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; float x_2_2_5; float x_2_2_6; float x_2_2_7; float x_2_2_8; } x_8_1_2; } x8; }*)arg1;

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
