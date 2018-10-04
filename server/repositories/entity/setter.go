package entity

func (entity *Entity) Insert() error {
	_, err := entity.CreateEntity()

	if err != nil {
		return err
	}

	Cache.Controller <- entity

	return nil
}

func (entity *Entity) SetReceiveChannels(channels []int) error {
	entity.ReceiveChannels = channels

	return entity.Propagate()
}

func (entity *Entity) SetSendChannels(channels []int) error {
	entity.SendChannels = channels

	return entity.Propagate()
}

func (entity *Entity) SetDisplayName(name string) error {
	entity.DisplayName = name

	return entity.Propagate()
}

func (entity *Entity) Propagate() error {
	_, err := entity.UpdateEntity()

	if err != nil {
		return err
	}

	Cache.Controller <- entity

	return nil
}
