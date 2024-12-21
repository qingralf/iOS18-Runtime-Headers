/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUChannelMediaData : NUChannelData <NUMedia> {
    NUImageGeometry * _geometry;
    <NUPipelineNode> * _node;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <NUGeometry> *geometry;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NUMedia> *media;
@property (nonatomic, readonly) <NUPipelineNode> *node;
@property (readonly) Class superclass;

+ (id)mediaDataWithCIImage:(id)arg1;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (bool)evaluate:(out id*)arg1;
- (id)geometry;
- (id)initWithFormat:(id)arg1;
- (id)initWithNode:(id)arg1 format:(id)arg2;
- (id)media;
- (id)node;

@end