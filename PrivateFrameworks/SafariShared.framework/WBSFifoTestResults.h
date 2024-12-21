/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSFifoTestResults : NSObject <WBSTestResults> {
    NSFileHandle * _fifoHandle;
    NSURL * _fifoURL;
    NSObject<OS_dispatch_queue> * _internalQueue;
}

@property (nonatomic, readonly) NSFileHandle *fifoHandle;
@property (nonatomic, readonly) NSURL *fifoURL;

+ (bool)createFifoAtFileURL:(id)arg1 error:(id*)arg2;
+ (id)readReportFromFifoHandle:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)_writeReportToFifo:(id)arg1;
- (void)beginTest:(id)arg1 inBundle:(id)arg2;
- (void)endTest:(id)arg1 inBundle:(id)arg2;
- (id)fifoHandle;
- (id)fifoURL;
- (void)flushWithCompletionHandler:(id /* block */)arg1;
- (id)initWithFifoURL:(id)arg1 error:(id*)arg2;
- (void)reportActualResults:(id)arg1 expectedResults:(id)arg2 expectedResultsName:(id)arg3 uniformTypeIdentifier:(id)arg4 forStage:(id)arg5 forTest:(id)arg6 inBundle:(id)arg7;
- (void)reportError:(id)arg1 forStage:(id)arg2 forTest:(id)arg3 inBundle:(id)arg4;
- (void)reportPerformance:(id)arg1 forStage:(id)arg2 forTest:(id)arg3 inBundle:(id)arg4;

@end