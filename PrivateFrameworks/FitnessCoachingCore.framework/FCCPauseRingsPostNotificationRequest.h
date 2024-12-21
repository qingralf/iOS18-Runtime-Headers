/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessCoachingCore.framework/FitnessCoachingCore
 */

@interface FCCPauseRingsPostNotificationRequest : NSObject <FCCDataSerializable> {
    bool  _force;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool force;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)description;
- (bool)force;
- (id)initWithForce:(bool)arg1;
- (id)initWithTransportData:(id)arg1;
- (id)transportData;

@end