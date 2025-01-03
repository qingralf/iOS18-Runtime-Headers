/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitMatter.framework/HomeKitMatter
 */

@interface HMMTRDeviceReader : HMFObject {
    NSNumber * _attributeID;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSNumber * _clusterID;
    MTRDevice * _device;
    HMMTRAttributeReportDistributor * _distributor;
    NSNumber * _endpointID;
    long long  _reportTimeoutNSecs;
}

@property (readonly) NSNumber *attributeID;
@property (readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) NSNumber *clusterID;
@property (readonly) MTRDevice *device;
@property (readonly) HMMTRAttributeReportDistributor *distributor;
@property (readonly) NSNumber *endpointID;
@property (nonatomic) long long reportTimeoutNSecs;

- (void).cxx_destruct;
- (void)_readAttributeAfterAttributeListConfirmationWithCompletionHandler:(id /* block */)arg1;
- (id)attributeID;
- (id)clientQueue;
- (id)clusterID;
- (id)device;
- (id)distributor;
- (id)endpointID;
- (id)initWithClientQueue:(id)arg1 distributor:(id)arg2 device:(id)arg3 endpointID:(id)arg4 clusterID:(id)arg5 attributeID:(id)arg6;
- (void)readAttributeWithCompletion:(id /* block */)arg1;
- (long long)reportTimeoutNSecs;
- (void)setReportTimeoutNSecs:(long long)arg1;

@end
