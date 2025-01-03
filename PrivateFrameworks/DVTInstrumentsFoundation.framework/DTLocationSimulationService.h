/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DVTInstrumentsFoundation.framework/DVTInstrumentsFoundation
 */

@interface DTLocationSimulationService : DTXService <DTLocationSimulationServiceRequests>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)registerCapabilities:(id)arg1;

- (id)initWithChannel:(id)arg1;
- (void)simulateLocationWithLatitude:(id)arg1 longitude:(id)arg2;
- (void)stopLocationSimulation;

@end
