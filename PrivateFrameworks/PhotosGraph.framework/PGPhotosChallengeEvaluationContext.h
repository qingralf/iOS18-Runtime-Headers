/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGPhotosChallengeEvaluationContext : NSObject {
    void graph;
    void photoLibrary;
    void publicEventManager;
    void sceneTaxonomy;
    void serviceManager;
}

@property (nonatomic, readonly) PGGraph *graph;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) CLSPublicEventManager *publicEventManager;
@property (nonatomic, readonly) CLSSceneTaxonomyHierarchy *sceneTaxonomy;
@property (nonatomic, readonly) CLSServiceManager *serviceManager;

- (void).cxx_destruct;
- (id)graph;
- (id)init;
- (id)photoLibrary;
- (id)publicEventManager;
- (id)sceneTaxonomy;
- (id)serviceManager;

@end