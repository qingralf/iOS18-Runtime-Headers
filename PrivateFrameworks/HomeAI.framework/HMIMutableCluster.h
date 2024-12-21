/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

@interface HMIMutableCluster : HMFObject <HMFLogging> {
    HMIMutableFloatArray * _faceCentroid;
    HMIFaceRecognition * _faceRecognition;
    NSMutableArray * _faceprintUUIDs;
    NSMutableSet * _linkedEntityUUIDs;
    HMIMutableFloatArray * _torsoCentroid;
    NSMutableArray * _torsoprintUUIDs;
    NSMutableArray * _torsoprints;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) HMIMutableFloatArray *faceCentroid;
@property (readonly) unsigned long long faceCount;
@property (retain) HMIFaceRecognition *faceRecognition;
@property (nonatomic, retain) NSMutableArray *faceprintUUIDs;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *linkedEntityUUIDs;
@property (readonly) Class superclass;
@property (readonly) HMIMutableFloatArray *torsoCentroid;
@property (readonly) unsigned long long torsoCount;
@property (nonatomic, retain) NSMutableArray *torsoprintUUIDs;
@property (retain) NSMutableArray *torsoprints;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)addFaceprints:(id)arg1;
- (void)addLinkedEntityUUIDs:(id)arg1;
- (void)addTorsoprints:(id)arg1;
- (id)faceCentroid;
- (unsigned long long)faceCount;
- (id)faceRecognition;
- (id)faceprintUUIDs;
- (void)flushTorsoprints;
- (id)initWithFaceprint:(id)arg1;
- (id)initWithTorsoprint:(id)arg1;
- (id)linkedEntityUUIDs;
- (void)setFaceRecognition:(id)arg1;
- (void)setFaceprintUUIDs:(id)arg1;
- (void)setLinkedEntityUUIDs:(id)arg1;
- (void)setTorsoprintUUIDs:(id)arg1;
- (void)setTorsoprints:(id)arg1;
- (id)torsoCentroid;
- (unsigned long long)torsoCount;
- (id)torsoprintUUIDs;
- (id)torsoprints;

@end