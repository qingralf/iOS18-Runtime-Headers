/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MicroLocationDaemon.framework/MicroLocationDaemon
 */

@interface ULCMPDRFenceProvider : NSObject {
    NSString * _fenceIdentifier;
    CMPedestrianFenceManager * _fenceManager;
    NSString * _fenceName;
    bool  _isFenceActive;
    bool  _isSessionStarted;
    id /* block */  _onErrorIndication;
    id /* block */  _onMotionMeasurements;
    id /* block */  _onStatusReport;
    NSObject<OS_dispatch_queue> * _queue;
    NSNumber * _radius;
}

@property (nonatomic, retain) NSString *fenceIdentifier;
@property (nonatomic, retain) CMPedestrianFenceManager *fenceManager;
@property (nonatomic, retain) NSString *fenceName;
@property (nonatomic) bool isFenceActive;
@property (nonatomic) bool isSessionStarted;
@property (nonatomic, copy) id /* block */ onErrorIndication;
@property (nonatomic, copy) id /* block */ onMotionMeasurements;
@property (nonatomic, copy) id /* block */ onStatusReport;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSNumber *radius;

+ (bool)_isAvailable;

- (void).cxx_destruct;
- (void)_handleFenceCross:(id)arg1 error:(id)arg2;
- (void)_handleStatusUpdate:(id)arg1 withError:(id)arg2;
- (void)_handleStatusUpdateError:(id)arg1;
- (void)clearFence;
- (void)endSession;
- (id)fenceIdentifier;
- (id)fenceManager;
- (id)fenceName;
- (id)initWithFenceIdentifier:(id)arg1 queue:(id)arg2 radiusInMeters:(id)arg3 callback:(id /* block */)arg4 statusCallback:(id /* block */)arg5 errorCallback:(id /* block */)arg6;
- (bool)isFenceActive;
- (bool)isSessionStarted;
- (id /* block */)onErrorIndication;
- (id /* block */)onMotionMeasurements;
- (id /* block */)onStatusReport;
- (id)queue;
- (id)radius;
- (void)setFence;
- (void)setFenceIdentifier:(id)arg1;
- (void)setFenceManager:(id)arg1;
- (void)setFenceName:(id)arg1;
- (void)setFenceRadius:(id)arg1;
- (void)setIsFenceActive:(bool)arg1;
- (void)setIsSessionStarted:(bool)arg1;
- (void)setOnErrorIndication:(id /* block */)arg1;
- (void)setOnMotionMeasurements:(id /* block */)arg1;
- (void)setOnStatusReport:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setRadius:(id)arg1;
- (void)startSession;

@end
