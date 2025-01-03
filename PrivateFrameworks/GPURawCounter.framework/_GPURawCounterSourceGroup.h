/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GPURawCounter.framework/GPURawCounter
 */

@interface _GPURawCounterSourceGroup : NSObject <GPURawCounterSourceGroup> {
    unsigned int  _acceleratorPort;
    NSDictionary * _features;
    NSString * _name;
    NSDictionary * _options;
    NSArray * _sourceList;
}

@property (readonly) unsigned int acceleratorPort;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *features;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (copy) NSDictionary *options;
@property (readonly) unsigned long long sampleMarker;
@property (readonly) NSArray *sourceList;
@property (readonly) Class superclass;

- (unsigned int)acceleratorPort;
- (void)dealloc;
- (id)features;
- (id)initWithAcceleratorPort:(unsigned int)arg1;
- (id)name;
- (id)options;
- (unsigned long long)sampleMarker;
- (void)setOptions:(id)arg1;
- (id)sourceList;
- (bool)startSampling;
- (bool)startSamplingWithError:(id*)arg1;
- (bool)stopSampling;
- (bool)stopSamplingWithError:(id*)arg1;
- (id)subDivideCounterList:(id)arg1 withOptions:(id)arg2;

@end
