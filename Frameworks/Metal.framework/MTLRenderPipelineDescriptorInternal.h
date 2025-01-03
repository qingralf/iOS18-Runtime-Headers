/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLRenderPipelineDescriptorInternal : MTLRenderPipelineDescriptor {
    struct MTLRenderPipelineDescriptorPrivate { 
        MTLRenderPipelineColorAttachmentDescriptorArrayInternal *attachments; 
        unsigned long long rtBlendDescHash[8]; 
        unsigned long long depthAttachmentPixelFormat; 
        unsigned long long stencilAttachmentPixelFormat; 
        unsigned long long tessellationPartitionMode; 
        unsigned long long maxTessellationFactor; 
        bool tessellationFactorScaleEnabled; 
        unsigned long long tessellationFactorFormat; 
        unsigned long long tessellationControlPointIndexType; 
        unsigned long long tessellationFactorStepFunction; 
        unsigned long long tessellationOutputWindingOrder; 
        unsigned long long postVertexDumpBufferIndex; 
        bool supportIndirectCommandBuffers; 
        long long shaderValidation; 
        long long shaderValidationState; 
        long long textureWriteRoundingMode; 
        union { 
            unsigned long long sampleCount; 
            unsigned long long rasterSampleCount; 
        } ; 
        unsigned long long sampleMask; 
        union { 
            unsigned int sampleCoverageHash; 
            float sampleCoverage; 
        } ; 
        unsigned long long paddingToRemove; 
        unsigned long long colorSampleCount; 
        union { 
            unsigned int miscHash[2]; 
            struct { 
                unsigned int alphaToCoverageEnabled : 1; 
                unsigned int alphaToOneEnabled : 1; 
                unsigned int rasterizationEnabled : 1; 
                unsigned int inputPrimitiveTopology : 2; 
                unsigned int private0 : 1; 
                unsigned int depthStencilWriteDisabled : 1; 
                unsigned int openGLMode : 1; 
                unsigned int sampleCoverageInvert : 1; 
                unsigned int private4 : 1; 
                unsigned int vertexAmplificationMode : 1; 
                unsigned int twoSideEnabled : 1; 
                unsigned int pointSizeOutputVS : 1; 
                unsigned int pointCoordLowerLeft : 1; 
                unsigned int pointSmoothEnabled : 1; 
                unsigned int clipDistanceEnableMask : 8; 
                unsigned int alphaTestFunc : 3; 
                unsigned int alphaTestEnabled : 1; 
                unsigned int logicOp : 4; 
                unsigned int logicOpEnabled : 1; 
                unsigned int forceResourceIndex : 1; 
                unsigned int forceSoftwareVertexFetch : 1; 
                unsigned int objectThreadgroupSizeIsMultipleOfThreadExecutionWidth : 1; 
                unsigned int meshThreadgroupSizeIsMultipleOfThreadExecutionWidth : 1; 
                unsigned int internalPipeline : 1; 
            } ; 
        } ; 
        unsigned int vertexDepthCompareClampMask; 
        unsigned int fragmentDepthCompareClampMask; 
        unsigned long long resourceIndex; 
        NSString *label; 
        <MTLFunction> *vertexFunction; 
        <MTLFunction> *fragmentFunction; 
        MTLVertexDescriptorInternal *vertexDescriptor; 
        <MTLFunction> *objectFunction; 
        <MTLFunction> *meshFunction; 
        struct { 
            unsigned long long width; 
            unsigned long long height; 
            unsigned long long depth; 
        } objectThreadsPerThreadgroup_DO_NOT_USE_WILL_BE_REMOVED; 
        struct { 
            unsigned long long width; 
            unsigned long long height; 
            unsigned long long depth; 
        } meshThreadsPerThreadgroup_DO_NOT_USE_WILL_BE_REMOVED; 
        struct { 
            unsigned long long width; 
            unsigned long long height; 
            unsigned long long depth; 
        } maxPipelineChildren; 
        unsigned long long pipelineMemoryLength; 
        MTLPipelineBufferDescriptorArrayInternal *objectBuffers; 
        MTLPipelineBufferDescriptorArrayInternal *meshBuffers; 
        unsigned long long maxTotalThreadsPerObjectThreadgroup; 
        unsigned long long maxTotalThreadsPerMeshThreadgroup; 
        MTLPipelineBufferDescriptorArrayInternal *vertexBuffers; 
        MTLPipelineBufferDescriptorArrayInternal *fragmentBuffers; 
        NSDictionary *driverCompilerOptions; 
        NSDictionary *gpuCompilerSPIOptions; 
        <MTLPipelineLibrary> *pipelineLibrary; 
        void *pad0; 
        void *pad1; 
        NSDictionary *pluginData; 
        bool needsCustomBorderColorSamplers; 
        unsigned int maxVertexAmplificationCount; 
        NSArray *binaryArchives; 
        MTLLinkedFunctions *vertexLinkedFunctions; 
        MTLLinkedFunctions *fragmentLinkedFunctions; 
        MTLLinkedFunctions *objectLinkedFunctions; 
        MTLLinkedFunctions *meshLinkedFunctions; 
        NSArray *vertexPreloadedLibraries; 
        NSArray *fragmentPreloadedLibraries; 
        NSArray *objectPreloadedLibraries; 
        NSArray *meshPreloadedLibraries; 
        unsigned long long maxVertexStackCallDepth; 
        unsigned long long maxFragmentStackCallDepth; 
        bool supportAddingVertexBinaryFunctions; 
        bool supportAddingFragmentBinaryFunctions; 
        unsigned long long maxMeshStackCallDepth; 
        unsigned long long maxObjectStackCallDepth; 
        bool supportAddingMeshBinaryFunctions; 
        bool supportAddingObjectBinaryFunctions; 
        MTLProfileControl *profileControl; 
        unsigned int explicitVisibilityGroupID; 
        unsigned long long maxAccelerationStructureTraversalDepth; 
    }  _private;
}

@property (nonatomic) bool forceSoftwareVertexFetch;
@property (nonatomic) unsigned long long postVertexDumpBufferIndex;

- (const struct MTLRenderPipelineDescriptorPrivate { id x1; unsigned long long x2[8]; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; bool x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; bool x13; long long x14; long long x15; long long x16; union { unsigned long long x_17_1_1; unsigned long long x_17_1_2; } x17; unsigned long long x18; union { unsigned int x_19_1_1; float x_19_1_2; } x19; unsigned long long x20; unsigned long long x21; union { unsigned int x_22_1_1[2]; struct { unsigned int x_2_2_1 : 1; unsigned int x_2_2_2 : 1; unsigned int x_2_2_3 : 1; unsigned int x_2_2_4 : 2; unsigned int x_2_2_5 : 1; unsigned int x_2_2_6 : 1; unsigned int x_2_2_7 : 1; unsigned int x_2_2_8 : 1; unsigned int x_2_2_9 : 1; unsigned int x_2_2_10 : 1; unsigned int x_2_2_11 : 1; unsigned int x_2_2_12 : 1; unsigned int x_2_2_13 : 1; unsigned int x_2_2_14 : 1; unsigned int x_2_2_15 : 8; unsigned int x_2_2_16 : 3; unsigned int x_2_2_17 : 1; unsigned int x_2_2_18 : 4; unsigned int x_2_2_19 : 1; unsigned int x_2_2_20 : 1; unsigned int x_2_2_21 : 1; unsigned int x_2_2_22 : 1; unsigned int x_2_2_23 : 1; unsigned int x_2_2_24 : 1; } x_22_1_2; } x22; }*)_descriptorPrivate;
- (unsigned long long)alphaTestFunction;
- (void)attachVertexDescriptor:(id)arg1;
- (id)binaryArchives;
- (unsigned char)clipDistanceEnableMask;
- (id)colorAttachments;
- (unsigned long long)colorSampleCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)depthAttachmentPixelFormat;
- (id)description;
- (id)driverCompilerOptions;
- (unsigned int)explicitVisibilityGroupID;
- (bool)forceResourceIndex;
- (bool)forceSoftwareVertexFetch;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)fragmentBuffers;
- (unsigned int)fragmentDepthCompareClampMask;
- (id)fragmentFunction;
- (id)fragmentLinkedFunctions;
- (id)fragmentPreloadedLibraries;
- (id)gpuCompilerSPIOptions;
- (unsigned long long)hash;
- (id)init;
- (unsigned long long)inputPrimitiveTopology;
- (id)insertFragmentLibraries;
- (id)insertMeshLibraries;
- (id)insertObjectLibraries;
- (id)insertVertexLibraries;
- (bool)isAlphaTestEnabled;
- (bool)isAlphaToCoverageEnabled;
- (bool)isAlphaToOneEnabled;
- (bool)isDepthStencilWriteDisabled;
- (bool)isEqual:(id)arg1;
- (bool)isLogicOperationEnabled;
- (bool)isPointCoordLowerLeft;
- (bool)isPointSizeOutputVS;
- (bool)isPointSmoothEnabled;
- (bool)isRasterizationEnabled;
- (bool)isTessellationFactorScaleEnabled;
- (bool)isTwoSideEnabled;
- (id)label;
- (unsigned long long)logicOperation;
- (unsigned long long)maxAccelerationStructureTraversalDepth;
- (unsigned long long)maxFragmentCallStackDepth;
- (unsigned long long)maxMeshCallStackDepth;
- (unsigned long long)maxObjectCallStackDepth;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })maxPipelineChildren;
- (unsigned long long)maxTessellationFactor;
- (unsigned long long)maxTotalThreadsPerMeshThreadgroup;
- (unsigned long long)maxTotalThreadsPerObjectThreadgroup;
- (unsigned long long)maxVertexAmplificationCount;
- (unsigned long long)maxVertexCallStackDepth;
- (id)meshBuffers;
- (id)meshFunction;
- (id)meshLinkedFunctions;
- (id)meshPreloadedLibraries;
- (bool)meshThreadgroupSizeIsMultipleOfThreadExecutionWidth;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })meshThreadsPerThreadgroup;
- (bool)needsCustomBorderColorSamplers;
- (id)newPipelineScript;
- (id)newSerializedFragmentDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newSerializedMeshDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)newSerializedObjectDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)newSerializedVertexDataWithFlags:(unsigned long long)arg1 error:(id*)arg2;
- (id)newSerializedVertexDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)objectBuffers;
- (id)objectFunction;
- (id)objectLinkedFunctions;
- (id)objectPreloadedLibraries;
- (bool)objectThreadgroupSizeIsMultipleOfThreadExecutionWidth;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })objectThreadsPerThreadgroup;
- (bool)openGLModeEnabled;
- (id)pipelineLibrary;
- (unsigned long long)pipelineMemoryLength;
- (id)pluginData;
- (unsigned long long)postVertexDumpBufferIndex;
- (id)profileControl;
- (unsigned long long)rasterSampleCount;
- (void)reset;
- (unsigned long long)resourceIndex;
- (unsigned long long)sampleCount;
- (float)sampleCoverage;
- (bool)sampleCoverageInvert;
- (unsigned long long)sampleMask;
- (id)serializeFragmentData;
- (void)setAlphaTestEnabled:(bool)arg1;
- (void)setAlphaTestFunction:(unsigned long long)arg1;
- (void)setAlphaToCoverageEnabled:(bool)arg1;
- (void)setAlphaToOneEnabled:(bool)arg1;
- (void)setBinaryArchives:(id)arg1;
- (void)setClipDistanceEnableMask:(unsigned char)arg1;
- (void)setColorSampleCount:(unsigned long long)arg1;
- (void)setDepthAttachmentPixelFormat:(unsigned long long)arg1;
- (void)setDepthStencilWriteDisabled:(bool)arg1;
- (void)setDriverCompilerOptions:(id)arg1;
- (void)setExplicitVisibilityGroupID:(unsigned int)arg1;
- (void)setForceResourceIndex:(bool)arg1;
- (void)setForceSoftwareVertexFetch:(bool)arg1;
- (void)setFragmentDepthCompareClampMask:(unsigned int)arg1;
- (void)setFragmentFunction:(id)arg1;
- (void)setFragmentLinkedFunctions:(id)arg1;
- (void)setFragmentPreloadedLibraries:(id)arg1;
- (void)setGpuCompilerSPIOptions:(id)arg1;
- (void)setInputPrimitiveTopology:(unsigned long long)arg1;
- (void)setInsertFragmentLibraries:(id)arg1;
- (void)setInsertMeshLibraries:(id)arg1;
- (void)setInsertObjectLibraries:(id)arg1;
- (void)setInsertVertexLibraries:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLogicOperation:(unsigned long long)arg1;
- (void)setLogicOperationEnabled:(bool)arg1;
- (void)setMaxAccelerationStructureTraversalDepth:(unsigned long long)arg1;
- (void)setMaxFragmentCallStackDepth:(unsigned long long)arg1;
- (void)setMaxMeshCallStackDepth:(unsigned long long)arg1;
- (void)setMaxObjectCallStackDepth:(unsigned long long)arg1;
- (void)setMaxPipelineChildren:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)setMaxTessellationFactor:(unsigned long long)arg1;
- (void)setMaxTotalThreadsPerMeshThreadgroup:(unsigned long long)arg1;
- (void)setMaxTotalThreadsPerObjectThreadgroup:(unsigned long long)arg1;
- (void)setMaxVertexAmplificationCount:(unsigned long long)arg1;
- (void)setMaxVertexCallStackDepth:(unsigned long long)arg1;
- (void)setMeshFunction:(id)arg1;
- (void)setMeshLinkedFunctions:(id)arg1;
- (void)setMeshPreloadedLibraries:(id)arg1;
- (void)setMeshThreadgroupSizeIsMultipleOfThreadExecutionWidth:(bool)arg1;
- (void)setMeshThreadsPerThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)setNeedsCustomBorderColorSamplers:(bool)arg1;
- (void)setObjectFunction:(id)arg1;
- (void)setObjectLinkedFunctions:(id)arg1;
- (void)setObjectPreloadedLibraries:(id)arg1;
- (void)setObjectThreadgroupSizeIsMultipleOfThreadExecutionWidth:(bool)arg1;
- (void)setObjectThreadsPerThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)setOpenGLModeEnabled:(bool)arg1;
- (void)setPipelineLibrary:(id)arg1;
- (void)setPipelineMemoryLength:(unsigned long long)arg1;
- (void)setPluginData:(id)arg1;
- (void)setPointCoordLowerLeft:(bool)arg1;
- (void)setPointSizeOutputVS:(bool)arg1;
- (void)setPointSmoothEnabled:(bool)arg1;
- (void)setPostVertexDumpBufferIndex:(unsigned long long)arg1;
- (void)setProfileControl:(id)arg1;
- (void)setRasterSampleCount:(unsigned long long)arg1;
- (void)setRasterizationEnabled:(bool)arg1;
- (void)setResourceIndex:(unsigned long long)arg1;
- (void)setSampleCount:(unsigned long long)arg1;
- (void)setSampleCoverage:(float)arg1;
- (void)setSampleCoverageInvert:(bool)arg1;
- (void)setSampleMask:(unsigned long long)arg1;
- (void)setShaderValidation:(long long)arg1;
- (void)setShaderValidationState:(long long)arg1;
- (void)setStencilAttachmentPixelFormat:(unsigned long long)arg1;
- (void)setSupportAddingFragmentBinaryFunctions:(bool)arg1;
- (void)setSupportAddingMeshBinaryFunctions:(bool)arg1;
- (void)setSupportAddingObjectBinaryFunctions:(bool)arg1;
- (void)setSupportAddingVertexBinaryFunctions:(bool)arg1;
- (void)setSupportIndirectCommandBuffers:(bool)arg1;
- (void)setTessellationControlPointIndexType:(unsigned long long)arg1;
- (void)setTessellationFactorFormat:(unsigned long long)arg1;
- (void)setTessellationFactorScaleEnabled:(bool)arg1;
- (void)setTessellationFactorStepFunction:(unsigned long long)arg1;
- (void)setTessellationOutputWindingOrder:(unsigned long long)arg1;
- (void)setTessellationPartitionMode:(unsigned long long)arg1;
- (void)setTextureWriteRoundingMode:(long long)arg1;
- (void)setTwoSideEnabled:(bool)arg1;
- (void)setVertexAmplificationMode:(unsigned long long)arg1;
- (void)setVertexDepthCompareClampMask:(unsigned int)arg1;
- (void)setVertexDescriptor:(id)arg1;
- (void)setVertexFunction:(id)arg1;
- (void)setVertexLinkedFunctions:(id)arg1;
- (void)setVertexPreloadedLibraries:(id)arg1;
- (long long)shaderValidation;
- (long long)shaderValidationState;
- (unsigned long long)stencilAttachmentPixelFormat;
- (bool)supportAddingFragmentBinaryFunctions;
- (bool)supportAddingMeshBinaryFunctions;
- (bool)supportAddingObjectBinaryFunctions;
- (bool)supportAddingVertexBinaryFunctions;
- (bool)supportIndirectCommandBuffers;
- (unsigned long long)tessellationControlPointIndexType;
- (unsigned long long)tessellationFactorFormat;
- (unsigned long long)tessellationFactorStepFunction;
- (unsigned long long)tessellationOutputWindingOrder;
- (unsigned long long)tessellationPartitionMode;
- (long long)textureWriteRoundingMode;
- (void)validateWithDevice:(id)arg1;
- (bool)validateWithDevice:(id)arg1 error:(id*)arg2;
- (unsigned long long)vertexAmplificationMode;
- (id)vertexBuffers;
- (unsigned int)vertexDepthCompareClampMask;
- (id)vertexDescriptor;
- (id)vertexFunction;
- (id)vertexLinkedFunctions;
- (id)vertexPreloadedLibraries;

@end
