/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CAFCombine.framework/CAFCombine
 */

@interface CAFCombine.CAFTestControlSyncObservable : NSObject <CAFTestControlSyncObserver> {
    void cachedDescription;
    void cachedDescriptionLock;
    void observed;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)serviceDidFinishGroupUpdate:(id)arg1;
- (void)serviceDidUpdate:(id)arg1 characteristic:(id)arg2 fromGroupUpdate:(bool)arg3;
- (void)serviceDidUpdate:(id)arg1 receivedAllValues:(bool)arg2;
- (void)testControlSyncServiceDidUpdateTestDevRequestNoParams:(id)arg1;
- (void)testControlSyncServiceDidUpdateTestDevRequestWithReqAndResParams:(id)arg1;
- (void)testControlSyncServiceDidUpdateTestDevRequestWithReqParams:(id)arg1;
- (void)testControlSyncServiceDidUpdateTestDevRequestWithResParams:(id)arg1;

@end