/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAEnrichmentTask : NSObject <PHATask>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PGGraphDataModelEnrichmentProcessor> *enrichmentProcessor;
@property (nonatomic, readonly) bool featureAvailable; /* unknown property attribute: ? */
@property (nonatomic, readonly) unsigned long long featureCode; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool featureComplete; /* unknown property attribute: ? */
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double incrementalWindow; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) double period;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long version; /* unknown property attribute: ? */

- (bool)currentPlatformIsSupported;
- (id)enrichmentProcessor;
- (id)incrementalKey;
- (id)name;
- (double)period;
- (int)priority;
- (bool)runWithGraphManager:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
- (bool)runWithGraphManager:(id)arg1 withIncrementalChange:(id)arg2 progressReporter:(id)arg3 error:(id*)arg4;
- (bool)shouldRunWithGraphManager:(id)arg1;
- (id)taskClassDependencies;
- (void)timeoutFatal:(bool)arg1;

@end
