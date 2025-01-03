/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGShareBackCoreRoutineSource : PGShareBackSource {
    CLSRoutineService * _routineService;
}

- (void).cxx_destruct;
- (id)initWithRoutineService:(id)arg1 loggingConnection:(id)arg2;
- (bool)prepareSourceWithGraph:(id)arg1;
- (bool)suggesterInput:(id)arg1 isCloseEnoughToLocation:(id)arg2 inDateInterval:(id)arg3;
- (id)suggesterResultsForInputs:(id)arg1 momentNodes:(id)arg2 inGraph:(id)arg3 error:(id*)arg4;

@end
