/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCyclerExtensionsTestSuite : NSObject <WBSCyclerOperationalTestSuite> {
    WBSCyclerIterationCounter * _iterationCounter;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (getter=isFinished, nonatomic, readonly) bool finished; /* unknown property attribute: ? */
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WBSCyclerIterationCounter *iterationCounter; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSArray *operations;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)iterationCounter;
- (id)operations;
- (id)relativeProbabilitiesForOperationsWithTopLevelItem:(id)arg1;
- (void)runWithTarget:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setIterationCounter:(id)arg1;

@end
