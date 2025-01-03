/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MLAssetIO.framework/MLAssetIO
 */

@interface MIOPackagedFileModel : NSObject <MIOModeling> {
    MIOModelDescription * _modelDescription;
    NSURL * _packageURL;
    NSObject<MIOModeling> * _specificationFileModel;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) void*irProgram;
@property (nonatomic, readonly, copy) NSArray *layers;
@property (nonatomic, copy) MIOModelDescription *modelDescription;
@property (nonatomic, readonly, copy) NSString *modelTypeName;
@property (nonatomic, copy) NSURL *packageURL;
@property (nonatomic, copy) NSObject<MIOModeling> *specificationFileModel;
@property (nonatomic, readonly, copy) MIOVersionInfo *specificationVersion;
@property (nonatomic, readonly, copy) NSArray *subModels;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)computePrecisionForFunctionNamed:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)initWithModel:(id)arg1;
- (void*)irProgram;
- (bool)isEqual:(id)arg1;
- (id)layers;
- (id)modelDescription;
- (id)modelTypeName;
- (id)neuralNetworkLayerHistogramForFunctionNamed:(id)arg1;
- (id)packageURL;
- (id)programOperationHistogramForFunctionNamed:(id)arg1;
- (void)setModelDescription:(id)arg1;
- (void)setPackageURL:(id)arg1;
- (void)setSpecificationFileModel:(id)arg1;
- (id)specificationFileModel;
- (id)specificationVersion;
- (id)storagePrecisionForFunctionNamed:(id)arg1;
- (id)subModels;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end
