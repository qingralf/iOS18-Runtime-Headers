/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRServerAttribute : NSObject {
    NSNumber * _attributeID;
    MTRDeviceController * _deviceController;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct ConcreteClusterPath { 
        unsigned short mEndpointId; 
        bool mExpanded; 
        unsigned int mClusterId; 
    }  _parentCluster;
    unsigned char  _requiredReadPrivilege;
    id  _serializedValue;
    NSDictionary * _value;
    bool  _writable;
}

@property (readonly, copy) NSNumber *attributeID;
@property (nonatomic, readonly) const struct ConcreteClusterPath { unsigned short x1; bool x2; unsigned int x3; }*parentCluster;
@property (readonly) unsigned char requiredReadPrivilege;
@property (nonatomic, readonly) id serializedValue;
@property (readonly, copy) NSDictionary *value;
@property (getter=isWritable, readonly) bool writable;

+ (id)newFeatureMapAttributeWithInitialValue:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addToCluster:(const struct ConcreteClusterPath { unsigned short x1; bool x2; unsigned int x3; }*)arg1;
- (bool)associateWithController:(id)arg1;
- (id)attributeID;
- (id)description;
- (id)initReadonlyAttributeWithID:(id)arg1 initialValue:(id)arg2 requiredPrivilege:(unsigned char)arg3;
- (void)invalidate;
- (bool)isWritable;
- (const struct ConcreteClusterPath { unsigned short x1; bool x2; unsigned int x3; }*)parentCluster;
- (unsigned char)requiredReadPrivilege;
- (id)serializedValue;
- (bool)setValue:(id)arg1;
- (void)updateParentCluster:(const struct ConcreteClusterPath { unsigned short x1; bool x2; unsigned int x3; }*)arg1;
- (id)value;

@end
