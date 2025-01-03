/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDAccessoryDiagnosticsSessionInternal : HMFObject <HMFLogging> {
    HMDAccessory * _accessory;
    unsigned long long  _bytesWritten;
    NSString * _filePath;
    unsigned long long  _maxBytes;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDAccessory *accessory;
@property (nonatomic) unsigned long long bytesWritten;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (copy) NSString *filePath;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maxBytes;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)accessory;
- (id)attributeDescriptions;
- (unsigned long long)bytesWritten;
- (id)filePath;
- (id)initWithAccessory:(id)arg1;
- (id)logIdentifier;
- (unsigned long long)maxBytes;
- (void)setBytesWritten:(unsigned long long)arg1;
- (void)setFilePath:(id)arg1;
- (void)setMaxBytes:(unsigned long long)arg1;
- (void)setUpWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)shutDown;
- (id)workQueue;

@end
