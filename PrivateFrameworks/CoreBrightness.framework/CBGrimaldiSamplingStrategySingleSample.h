/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface CBGrimaldiSamplingStrategySingleSample : NSObject <CBGrimaldiSamplingStrategy>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=getInitialNumberOfSamples, readonly) unsigned int initialNumberOfSamples;
@property (readonly) Class superclass;

- (id)description;
- (unsigned int)getInitialNumberOfSamples;
- (unsigned int)getNextNumberOfSamplesFromNewLux:(float)arg1 withLastLux:(id)arg2;

@end