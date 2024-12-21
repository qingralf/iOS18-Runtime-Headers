/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface VFXAssetNode : NSObject <NSSecureCoding> {
    id  _asset;
    NSMutableArray * _children;
    bool  _isGroup;
    NSString * _name;
    VFXAssetNode * _parent;
    bool  _prefab;
    VFXAssetRegistry * _registry;
}

@property (nonatomic, readonly) <VFXAsset> *asset;
@property (nonatomic, copy) NSArray *childNodes;
@property (getter=isGroup, nonatomic, readonly) bool group;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) VFXAssetNode *parentNode;

+ (id)assetNodeWithAsset:(id)arg1;
+ (id)group;
+ (bool)supportsSecureCoding;

- (bool)_enumerateChildNodesUsingBlock:(id /* block */)arg1;
- (void)_removeChild:(id)arg1;
- (void)addChildNode:(id)arg1;
- (id)asset;
- (id)childNodeWithAssetName:(id)arg1;
- (id)childNodeWithName:(id)arg1;
- (id)childNodes;
- (id)clone;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)enclosingPrefab;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateChildNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateHierarchyUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)insertChildNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isGroup;
- (bool)isPrefab;
- (id)name;
- (id)parentNode;
- (id)registry;
- (void)removeFromParent;
- (void)setChildNodes:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRegistry:(id)arg1;
- (void)setupChildsArrayIfNeeded;

@end