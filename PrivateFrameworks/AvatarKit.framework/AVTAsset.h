/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTAsset : NSObject {
    NSString * _ambientOcclusion;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    id  _cachedResource;
    long long  _componentType;
    unsigned long long  _editableColorCount;
    bool  _forceHighTessellation;
    NSDictionary * _highlights;
    NSString * _identifier;
    NSDictionary * _imageVariantDependencies;
    NSDictionary * _layers;
    NSDictionary * _materialVariantDependencies;
    NSDictionary * _morphVariantDependencies;
    NSDictionary * _perAssetMain;
    unsigned long long  _refCount;
    NSString * _resourcePath;
    unsigned char  _resourceType;
    NSDictionary * _specializationSettings;
    struct { 
        bool mirroringEnabled; 
        struct { 
            /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
        } transform; 
    }  _uvRemappingInfo;
    NSDictionary * _wrapDeformerDriverNames;
}

@property (readonly) NSString *ambientOcclusion;
@property (readonly) long long componentType;
@property (readonly) unsigned long long editableColorCount;
@property (readonly) NSString *identifier;
@property (readonly) bool is2DAsset;
@property (readonly) bool is3DAsset;
@property (readonly) NSDictionary *layers;
@property (readonly) NSDictionary *specializationSettings;
@property (readonly) struct { bool x1; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[3]; } x2; } uvRemappingInfo;

- (void).cxx_destruct;
- (id)ambientOcclusion;
- (id)assetImageForAsset:(id)arg1;
- (long long)componentType;
- (void)decrUseCount;
- (id)description;
- (unsigned long long)editableColorCount;
- (void)enumerateVariantDependenciesOfKind:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)freeCache;
- (id)identifier;
- (void)incrUseCount;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 path:(id)arg3;
- (id)instantiateResource;
- (bool)is2DAsset;
- (bool)is3DAsset;
- (id)layers;
- (id)resourceByCachingIfNeeded:(bool)arg1;
- (id)specializationSettings;
- (struct { bool x1; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[3]; } x2; })uvRemappingInfo;

@end
