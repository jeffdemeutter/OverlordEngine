#pragma once

class DiffuseMaterial_Skinned;
class BoxMaterial;
class DiffuseMaterial;
class UberMaterial;

class ProjectScene : public GameScene
{
public:
	ProjectScene() : GameScene(L"ProjectScene") {}
	~ProjectScene() override;
	ProjectScene(const ProjectScene& other) = delete;
	ProjectScene(ProjectScene&& other) noexcept = delete;
	ProjectScene& operator=(const ProjectScene& other) = delete;
	ProjectScene& operator=(ProjectScene&& other) noexcept = delete;

protected:
	virtual void Initialize() override;
	virtual void Update() override;
	virtual void Draw() override;
	virtual void OnGUI() override;

private:
	GameObject* m_pFloor = nullptr;
	UberMaterial* m_pFloorMaterial = nullptr;
	
	BoxMaterial* m_pBoxMaterial = nullptr;
	BoxMaterial* m_pBlockMaterial = nullptr;

	GameObject* m_pPlayer = nullptr;
	DiffuseMaterial_Skinned* m_pPlayerMaterial = nullptr;


	void InitArena(PxMaterial* );
	void InitBox(PxMaterial* physxMat, float x, float z);

	void InitBlock(PxMaterial* physxMat, float x, float z);
};

