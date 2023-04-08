
#include <llapi/mc/ServerCommandOrigin.hpp>
#include <llapi/mc/TeleportComponent.hpp>
#include <llapi/mc/BlockVolume.hpp>
#include <llapi/mc/OverworldGenerator.hpp>
#include <llapi/HookAPI.h>



THook(void, "?_prepareHeights@OverworldGeneratorMultinoise@@EEAAXAEAVBlockVolume@@AEBVChunkPos@@AEBVWorldGenCache@@PEAVAquifer@@$$QEAV?$function@$$A6AXAEBVBlockPos@@AEBVBlock@@H@Z@std@@_NPEAV?$vector@FV?$allocator@F@std@@@7@H@Z"
	, ServerCommandOrigin* a1,
	BlockVolume* a2,
	unsigned long long* a3,
	int a4,
	TeleportComponent* a5,
	__int64 a6,
	char a7,
	void** a8) {
	return;
}


THook(void, "?_prepareHeights@NetherGenerator@@AEAAXAEAVBlockVolume@@AEBVChunkPos@@_NPEAV?$vector@FV?$allocator@F@std@@@std@@H@Z",
	ServerCommandOrigin* _this,
	BlockVolume* a2,
	struct ChunkPos* a3,
	__int64 a4,
	__int64 a5) {
	return;
}

THook(void, "?placeBedrockFloor@Utils@VanillaSurfaceBuilders@@YAXAEAVRandom@@AEAVBlockVolume@@AEBVBlockPos@@@Z",
	void* a1,
	struct Random* a2,
	struct BlockVolume* a3,
	const struct BlockPos* a4) {
	return;
}

THook(void, "?placeBedrockCeiling@Utils@VanillaSurfaceBuilders@@YAXAEAVRandom@@AEAVBlockVolume@@AEBVBlockPos@@@Z"
	, void* _this,
	struct Random* a2,
	struct BlockVolume* a3,
	const struct BlockPos* a4) {
	return ;
}

THook(void, "?buildSurfaceAt@OceanFrozenSurfaceBuilder@VanillaSurfaceBuilders@@UEBAXAEBUBuildParameters@ISurfaceBuilder@@@Z",
	void* _this,
	void* a2) {
	return;
}

#include <llapi/mc/IcebergFeature.hpp>
THook(void, "?generateIcebergBlock@IcebergFeature@@AEBAXAEAVBlockSource@@AEAVRandom@@AEBVBlockPos@@HHHHHH_N3MHAEBVBlock@@@Z",
	IcebergFeature* _this,
	struct BlockSource* a2,
	struct Random* a3,
	const struct BlockPos* a4,
	int a5,
	int a6,
	int a7,
	int a8,
	int a9,
	int a10,
	bool a11,
	bool a12,
	float a13,
	int a14,
	const struct Block* a15) {
	//logger.info(a4->toString());
	return;
}

#include <llapi/mc/OceanRuinStart.hpp>
#include <llapi/mc/Dimension.hpp>
THook(void, "?createRuin@OceanRuinStart@@QEAAXAEAVDimension@@AEAVRandom@@HH@Z",
	OceanRuinStart* _this,
	Dimension* a2,
	struct Random* a3,
	int a4,
	int a5) {
	return;
}

//#include <llapi/mc/ShipwreckStart.hpp>
//THook(void, "?createStructureStart@ShipwreckFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z",
//	__int64 a1,
//	ShipwreckStart** a2,
//	__int64 a3,
//	const struct BiomeSource* a4,
//	struct Random* a5,
//	__int64 a6) {
//	return;
//}

#include <llapi/mc/FossilFeature.hpp>
THook(char, "?place@FossilFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z",
	FossilFeature* _this,
	struct BlockSource* a2,
	const struct BlockPos* a3,
	struct Random* a4) {
	return true;
}

#include <llapi/mc/NetherFossilFeature.hpp>
THook(long long, "?place@NetherFossilFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z",
	NetherFossilFeature* _this,
	struct BlockSource* a2,
	const struct BlockPos* a3,
	struct Random* a4) {
	return true;
}

#include <llapi/mc/ShipwreckFeature.hpp>
THook(bool, "?isFeatureChunk@ShipwreckFeature@@MEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z",
	ShipwreckFeature* _this,
	const struct BiomeSource* a2,
	struct Random* a3,
	const struct ChunkPos* a4,
	unsigned int a5,
	const struct IPreliminarySurfaceProvider* a6,
	const struct Dimension* a7) {
	return false;
}

THook(void, "?buildSurfaceAt@MesaSurfaceBuilder@VanillaSurfaceBuilders@@UEBAXAEBUBuildParameters@ISurfaceBuilder@@@Z",
	void* _this,
	const void* a2) {
	return;
}

#include <llapi/mc/VillageFeature.hpp>
THook(bool, "?isFeatureChunk@VillageFeature@@UEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z",
	VillageFeature* _this,
	const struct BiomeSource* a2,
	struct Random* a3,
	const struct ChunkPos* a4,
	unsigned int a5,
	const struct IPreliminarySurfaceProvider* a6) {
	return false;
}

#include <llapi/mc/OceanMonumentFeature.hpp>
THook(bool, "?isFeatureChunk@OceanMonumentFeature@@UEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z",
	OceanMonumentFeature* _this,
	const struct BiomeSource* a2,
	struct Random* a3,
	const struct ChunkPos* a4,
	unsigned int a5,
	const struct IPreliminarySurfaceProvider* a6) {
	return false;
}

#include <llapi/mc/JunglePyramidPiece.hpp>
THook(bool, "?postProcess@JunglePyramidPiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z",
	JunglePyramidPiece* _this,
	struct BlockSource* a2,
	struct Random* a3,
	const struct BoundingBox* a4) {
	return false;
}

#include <llapi/mc/DesertPyramidPiece.hpp>
THook(bool, "?postProcess@DesertPyramidPiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z",
	DesertPyramidPiece* _this,
	struct BlockSource* a2,
	struct Random* a3,
	const struct BoundingBox* a4) {
	return false;
}

#include <llapi/mc/PillagerOutpostFeature.hpp>
THook(bool, "?isFeatureChunk@PillagerOutpostFeature@@UEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z",
	PillagerOutpostFeature* _this,
	const struct BiomeSource* a2,
	struct Random* a3,
	ChunkPos* a4,
	unsigned int a5,
	const struct IPreliminarySurfaceProvider* a6) {
	return false;
}

#include <llapi/mc/StrongholdFeature.hpp>
THook(bool, "?isFeatureChunk@StrongholdFeature@@UEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z",
	StrongholdFeature* _this,
	const struct BiomeSource* a2,
	struct Random* a3,
	const struct ChunkPos* a4,
	unsigned int a5,
	const struct IPreliminarySurfaceProvider* a6,
	const struct Dimension* a7) {
	return false;
}

#include <llapi/mc/WoodlandMansionFeature.hpp>
THook(bool, "?isFeatureChunk@WoodlandMansionFeature@@MEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z",
	WoodlandMansionFeature* _this,
	const struct BiomeSource* a2,
	struct Random* a3,
	const struct ChunkPos* a4,
	unsigned int a5,
	const struct IPreliminarySurfaceProvider* a6) {
	return false;
}
//
//THook(void, "?createMansion@MansionPiecePlacer@WoodlandMansionPieces@@QEAAXAEBVBlockPos@@W4Rotation@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVMansionGrid@2@@Z",
//	__int64 a1,
//	unsigned long long* a2,
//	unsigned __int8 a3,
//	__int64 a4,
//	__int64 a5) {
//	return;
//}