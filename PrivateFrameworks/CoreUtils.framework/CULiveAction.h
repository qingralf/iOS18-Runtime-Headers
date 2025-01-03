/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CULiveAction : NSObject <CUActivatable, CUXPCCodable> {
    int  _alertType;
    NSArray * _destinationIDs;
    bool  _direct;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _invalidationHandler;
    NSString * _originatingHomeKitAccessoryID;
    NSURL * _soundFileURL;
    NSString * _speakText;
}

@property (nonatomic) int alertType;
@property (nonatomic, copy) NSArray *destinationIDs;
@property (nonatomic) bool direct;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *originatingHomeKitAccessoryID;
@property (nonatomic, copy) NSURL *soundFileURL;
@property (nonatomic, copy) NSString *speakText;

- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)arg1;
- (int)alertType;
- (id)destinationIDs;
- (bool)direct;
- (id)dispatchQueue;
- (void)encodeWithXPCObject:(id)arg1;
- (id)init;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)originatingHomeKitAccessoryID;
- (void)setAlertType:(int)arg1;
- (void)setDestinationIDs:(id)arg1;
- (void)setDirect:(bool)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setOriginatingHomeKitAccessoryID:(id)arg1;
- (void)setSoundFileURL:(id)arg1;
- (void)setSpeakText:(id)arg1;
- (id)soundFileURL;
- (id)speakText;

@end
