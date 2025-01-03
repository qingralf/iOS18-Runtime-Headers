/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTSubscriber : NSObject <CoreTelephonyClientSubscriberDelegateInternal> {
    CoreTelephonyClient * _client;
    <CTSubscriberDelegate> * _delegate;
    CTServiceDescriptor * _descriptor;
    struct queue { 
        struct object { 
            struct dispatch_object_s {} *fObj; 
        } fObj; 
    }  _queue;
}

@property (getter=isSIMInserted, readonly) bool SIMInserted;
@property (nonatomic, readonly, retain) NSData *carrierToken;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CTSubscriberDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CTServiceDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_isValidGid:(id)arg1;
- (bool)_isValidMCCMNCString:(id)arg1 max:(unsigned long long)arg2 min:(unsigned long long)arg3;
- (void)authTokenChanged:(id)arg1;
- (void)authenticate:(id)arg1 completion:(id /* block */)arg2;
- (void)authenticateWithInfo:(id)arg1 handleResult:(id /* block */)arg2;
- (id)carrierToken;
- (id)delegate;
- (id)descriptor;
- (id)identifier;
- (id)init;
- (id)initWithDescriptor:(id)arg1;
- (id)initWithDescriptor:(id)arg1 client:(id)arg2;
- (bool)isSIMInserted;
- (bool)refreshCarrierToken;
- (void)setDelegate:(id)arg1;
- (void)setDescriptor:(id)arg1;
- (bool)simInserted;
- (id)typeAllocationCode;

@end
